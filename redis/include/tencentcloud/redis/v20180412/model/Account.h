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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Sub-account information
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Account name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AccountName Account name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _accountName Account name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Account description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Remark Account description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Account description.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remark Account description.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Read/write permission policy.
- r: read-only.
- w: write-only.
- rw: read/write.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Privilege Read/write permission policy.
- r: read-only.
- w: write-only.
- rw: read/write.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Read/write permission policy.
- r: read-only.
- w: write-only.
- rw: read/write.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _privilege Read/write permission policy.
- r: read-only.
- w: write-only.
- rw: read/write.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Read-only routing policy.
- master: primary node.
- replication: secondary node.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReadonlyPolicy Read-only routing policy.
- master: primary node.
- replication: secondary node.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置Read-only routing policy.
- master: primary node.
- replication: secondary node.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _readonlyPolicy Read-only routing policy.
- master: primary node.
- replication: secondary node.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     * 
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取Sub-account status.
- 1: changing.
- 2: valid.
- 4: deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Sub-account status.
- 1: changing.
- 2: valid.
- 4: deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Sub-account status.
- 1: changing.
- 2: valid.
- 4: deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Sub-account status.
- 1: changing.
- 2: valid.
- 4: deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Account name.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Account description.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Read/write permission policy.
- r: read-only.
- w: write-only.
- rw: read/write.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Read-only routing policy.
- master: primary node.
- replication: secondary node.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * Sub-account status.
- 1: changing.
- 2: valid.
- 4: deleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
