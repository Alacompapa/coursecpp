#ifndef _INCLUDED_USER_H
#define _INCLUDED_USER_H

#include <string>

class User
{
    bool const d_valid;

    std::string d_name;                         // Data members
    std::string d_realName;
    std::string d_shell;
    size_t d_groupId;
    size_t d_userId;

    public:
        User();
        
        bool valid()            const;
        size_t groupId()        const;
        std::string homeDir()   const;
        bool inGroup(size_t gid) const;
        std::string name()      const;
        std::string realName(); const
        std::string shell()     const;
        size_t userId()         const;
};
#endif
