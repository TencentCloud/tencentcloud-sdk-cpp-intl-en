/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Account details
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account remarks
                     * @return Notes Account remarks
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置Account remarks
                     * @param _notes Account remarks
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取Account domain name
                     * @return Host Account domain name
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Account domain name
                     * @param _host Account domain name
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return User Account name
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Account name
                     * @param _user Account name
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Account information modification time
                     * @return ModifyTime Account information modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Account information modification time
                     * @param _modifyTime Account information modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Password modification time
                     * @return ModifyPasswordTime Password modification time
                     * 
                     */
                    std::string GetModifyPasswordTime() const;

                    /**
                     * 设置Password modification time
                     * @param _modifyPasswordTime Password modification time
                     * 
                     */
                    void SetModifyPasswordTime(const std::string& _modifyPasswordTime);

                    /**
                     * 判断参数 ModifyPasswordTime 是否已赋值
                     * @return ModifyPasswordTime 是否已赋值
                     * 
                     */
                    bool ModifyPasswordTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is deprecated.
                     * @return CreateTime This parameter is deprecated.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置This parameter is deprecated.
                     * @param _createTime This parameter is deprecated.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The maximum number of instance connections supported by an account
                     * @return MaxUserConnections The maximum number of instance connections supported by an account
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置The maximum number of instance connections supported by an account
                     * @param _maxUserConnections The maximum number of instance connections supported by an account
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * Account remarks
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * Account domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Account information modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Password modification time
                     */
                    std::string m_modifyPasswordTime;
                    bool m_modifyPasswordTimeHasBeenSet;

                    /**
                     * This parameter is deprecated.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The maximum number of instance connections supported by an account
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
