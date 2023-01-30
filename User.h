#pragma once

class UserData
{
public:
    virtual void Show() = 0;
    virtual ~UserData() = default;
};

class user_id
{
private:
    virtual void Show() = 0;
    virtual ~user_id() = default;
};