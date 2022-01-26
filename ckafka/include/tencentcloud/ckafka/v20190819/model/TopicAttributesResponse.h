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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicPartitionDO.h>
#include <tencentcloud/ckafka/v20190819/model/AclRule.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned topic attributes result entity
                */
                class TopicAttributesResponse : public AbstractModel
                {
                public:
                    TopicAttributesResponse();
                    ~TopicAttributesResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param TopicId Topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Topic remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Note Topic remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Topic remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Note Topic remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Number of partitions
                     * @return PartitionNum Number of partitions
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions
                     * @param PartitionNum Number of partitions
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取IP allowlist switch. 1: enabled, 0: disabled
                     * @return EnableWhiteList IP allowlist switch. 1: enabled, 0: disabled
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP allowlist switch. 1: enabled, 0: disabled
                     * @param EnableWhiteList IP allowlist switch. 1: enabled, 0: disabled
                     */
                    void SetEnableWhiteList(const int64_t& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取IP allowlist list
                     * @return IpWhiteList IP allowlist list
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP allowlist list
                     * @param IpWhiteList IP allowlist list
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取Topic configuration array
                     * @return Config Topic configuration array
                     */
                    Config GetConfig() const;

                    /**
                     * 设置Topic configuration array
                     * @param Config Topic configuration array
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Partition details
                     * @return Partitions Partition details
                     */
                    std::vector<TopicPartitionDO> GetPartitions() const;

                    /**
                     * 设置Partition details
                     * @param Partitions Partition details
                     */
                    void SetPartitions(const std::vector<TopicPartitionDO>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Switch of the preset ACL rule. `1`: enable, `0`: disable.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return EnableAclRule Switch of the preset ACL rule. `1`: enable, `0`: disable.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置Switch of the preset ACL rule. `1`: enable, `0`: disable.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param EnableAclRule Switch of the preset ACL rule. `1`: enable, `0`: disable.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetEnableAclRule(const int64_t& _enableAclRule);

                    /**
                     * 判断参数 EnableAclRule 是否已赋值
                     * @return EnableAclRule 是否已赋值
                     */
                    bool EnableAclRuleHasBeenSet() const;

                    /**
                     * 获取Preset ACL rule list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AclRuleList Preset ACL rule list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<AclRule> GetAclRuleList() const;

                    /**
                     * 设置Preset ACL rule list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param AclRuleList Preset ACL rule list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetAclRuleList(const std::vector<AclRule>& _aclRuleList);

                    /**
                     * 判断参数 AclRuleList 是否已赋值
                     * @return AclRuleList 是否已赋值
                     */
                    bool AclRuleListHasBeenSet() const;

                private:

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Topic remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * IP allowlist switch. 1: enabled, 0: disabled
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * IP allowlist list
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * Topic configuration array
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Partition details
                     */
                    std::vector<TopicPartitionDO> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Switch of the preset ACL rule. `1`: enable, `0`: disable.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * Preset ACL rule list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<AclRule> m_aclRuleList;
                    bool m_aclRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
