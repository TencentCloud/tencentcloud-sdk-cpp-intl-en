/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Allowlist
                */
                class Whitelist : public AbstractModel
                {
                public:
                    Whitelist();
                    ~Whitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return Ttl End time
                     * 
                     */
                    std::string GetTtl() const;

                    /**
                     * 设置End time
                     * @param _ttl End time
                     * 
                     */
                    void SetTtl(const std::string& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取Auto-Increment allowlist ID
                     * @return ID Auto-Increment allowlist ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Auto-Increment allowlist ID
                     * @param _iD Auto-Increment allowlist ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Unique business identifier
                     * @return WhitelistUin Unique business identifier
                     * 
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置Unique business identifier
                     * @param _whitelistUin Unique business identifier
                     * 
                     */
                    void SetWhitelistUin(const std::string& _whitelistUin);

                    /**
                     * 判断参数 WhitelistUin 是否已赋值
                     * @return WhitelistUin 是否已赋值
                     * 
                     */
                    bool WhitelistUinHasBeenSet() const;

                    /**
                     * 获取Creator ID
                     * @return CreateUser Creator ID
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator ID
                     * @param _createUser Creator ID
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取aid
                     * @return Aid aid
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置aid
                     * @param _aid aid
                     * 
                     */
                    void SetAid(const std::string& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     * 
                     */
                    bool AidHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * Auto-Increment allowlist ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Unique business identifier
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * Creator ID
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * aid
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_
