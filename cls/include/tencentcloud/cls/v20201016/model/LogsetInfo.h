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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Logset information
                */
                class LogsetInfo : public AbstractModel
                {
                public:
                    LogsetInfo();
                    ~LogsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Logset name
                     * @return LogsetName Logset name
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name
                     * @param _logsetName Logset name
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * @return CreateTime Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * @param _createTime Creation time. Format `YYYY-MM-DD HH:MM:SS`
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
                     * 获取If AssumerUin is not empty, it indicates the Uin of the service provider that created the log set.
                     * @return AssumerUin If AssumerUin is not empty, it indicates the Uin of the service provider that created the log set.
                     * 
                     */
                    uint64_t GetAssumerUin() const;

                    /**
                     * 设置If AssumerUin is not empty, it indicates the Uin of the service provider that created the log set.
                     * @param _assumerUin If AssumerUin is not empty, it indicates the Uin of the service provider that created the log set.
                     * 
                     */
                    void SetAssumerUin(const uint64_t& _assumerUin);

                    /**
                     * 判断参数 AssumerUin 是否已赋值
                     * @return AssumerUin 是否已赋值
                     * 
                     */
                    bool AssumerUinHasBeenSet() const;

                    /**
                     * 获取Cloud product identifier. When the logset is created by other cloud products, this field displays the cloud product name, such as CDN and TKE.
                     * @return AssumerName Cloud product identifier. When the logset is created by other cloud products, this field displays the cloud product name, such as CDN and TKE.
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置Cloud product identifier. When the logset is created by other cloud products, this field displays the cloud product name, such as CDN and TKE.
                     * @param _assumerName Cloud product identifier. When the logset is created by other cloud products, this field displays the cloud product name, such as CDN and TKE.
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取Tag bound to log set
                     * @return Tags Tag bound to log set
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag bound to log set
                     * @param _tags Tag bound to log set
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Number of log topics in logset
                     * @return TopicCount Number of log topics in logset
                     * 
                     */
                    int64_t GetTopicCount() const;

                    /**
                     * 设置Number of log topics in logset
                     * @param _topicCount Number of log topics in logset
                     * 
                     */
                    void SetTopicCount(const int64_t& _topicCount);

                    /**
                     * 判断参数 TopicCount 是否已赋值
                     * @return TopicCount 是否已赋值
                     * 
                     */
                    bool TopicCountHasBeenSet() const;

                    /**
                     * 获取If `AssumerName` is not empty, it indicates the service provider who creates the logset.
                     * @return RoleName If `AssumerName` is not empty, it indicates the service provider who creates the logset.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置If `AssumerName` is not empty, it indicates the service provider who creates the logset.
                     * @param _roleName If `AssumerName` is not empty, it indicates the service provider who creates the logset.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Number of metric topics under log sets
                     * @return MetricTopicCount Number of metric topics under log sets
                     * 
                     */
                    int64_t GetMetricTopicCount() const;

                    /**
                     * 设置Number of metric topics under log sets
                     * @param _metricTopicCount Number of metric topics under log sets
                     * 
                     */
                    void SetMetricTopicCount(const int64_t& _metricTopicCount);

                    /**
                     * 判断参数 MetricTopicCount 是否已赋值
                     * @return MetricTopicCount 是否已赋值
                     * 
                     */
                    bool MetricTopicCountHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Logset name
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * If AssumerUin is not empty, it indicates the Uin of the service provider that created the log set.
                     */
                    uint64_t m_assumerUin;
                    bool m_assumerUinHasBeenSet;

                    /**
                     * Cloud product identifier. When the logset is created by other cloud products, this field displays the cloud product name, such as CDN and TKE.
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * Tag bound to log set
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Number of log topics in logset
                     */
                    int64_t m_topicCount;
                    bool m_topicCountHasBeenSet;

                    /**
                     * If `AssumerName` is not empty, it indicates the service provider who creates the logset.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Number of metric topics under log sets
                     */
                    int64_t m_metricTopicCount;
                    bool m_metricTopicCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_
