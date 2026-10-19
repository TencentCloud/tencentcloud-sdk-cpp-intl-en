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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * User group list information.
                */
                class Aggregator : public AbstractModel
                {
                public:
                    Aggregator();
                    ~Aggregator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account group name
                     * @return Name Account group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account group name
                     * @param _name Account group name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Account group description
                     * @return Description Account group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Account group description
                     * @param _description Account group description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creator user ID.
                     * @return OwnerUin Creator user ID.
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置Creator user ID.
                     * @param _ownerUin Creator user ID.
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Number of account group members.
                     * @return AccountCount Number of account group members.
                     * 
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 设置Number of account group members.
                     * @param _accountCount Number of account group members.
                     * 
                     */
                    void SetAccountCount(const uint64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取RD: global account group.
                     * @return Type RD: global account group.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置RD: global account group.
                     * @param _type RD: global account group.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Account group ID.
                     * @return AccountGroupId Account group ID.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID.
                     * @param _accountGroupId Account group ID.
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取Account group status.
                     * @return AggregatorStatus Account group status.
                     * 
                     */
                    uint64_t GetAggregatorStatus() const;

                    /**
                     * 设置Account group status.
                     * @param _aggregatorStatus Account group status.
                     * 
                     */
                    void SetAggregatorStatus(const uint64_t& _aggregatorStatus);

                    /**
                     * 判断参数 AggregatorStatus 是否已赋值
                     * @return AggregatorStatus 是否已赋值
                     * 
                     */
                    bool AggregatorStatusHasBeenSet() const;

                    /**
                     * 获取Account group name
                     * @return MemberName Account group name
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Account group name
                     * @param _memberName Account group name
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                private:

                    /**
                     * Account group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Account group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creator user ID.
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of account group members.
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * RD: global account group.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Account group ID.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * Account group status.
                     */
                    uint64_t m_aggregatorStatus;
                    bool m_aggregatorStatusHasBeenSet;

                    /**
                     * Account group name
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_AGGREGATOR_H_
