#pragma once
#include <iostream>
#include <unordered_set>

using namespace std;

struct User {
    explicit User(int id) : id_(id) {}

    void BeFriend(int friend_id) {
        friends_.insert(friend_id);
    }

    unordered_set<int>& GetFriends() {
        return friends_;
    }

    void PrintFriends() const {
        cout << "User " << id_ << " friends: ";
        for (int friend_id : friends_) {
            cout << friend_id << " ";
        }
        cout << '\n';
    }

    int GetID() const {
        return id_;
    }

private:
    int id_;
    unordered_set<int> friends_;
};

struct Graph {

    void Add(int id, const User& obj) {
        users_.emplace(id, obj);
    }

    void BeFriend(int id1, int id2) {
        if (users_.count(id1) && users_.count(id2)) {
            users_[id1].BeFriend(id2);
            users_[id2].BeFriend(id1);
        }
    }

    void PrintGraph() const {
        for (const auto& [id, user] : users_) {
            user.PrintFriends();
        }
    }

    vector<pair<int, int>> GetRec(int id) const {
        if (!users_.count(id)) {
            return {};
        }

        //
    }

private:
    unordered_map<int, User> users_;
};


