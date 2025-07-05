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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CLS topic information
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable publishing
                     * @return Enabled Whether to enable publishing
                     * 
                     */
                    int64_t GetEnabled() const;

                    /**
                     * 设置Whether to enable publishing
                     * @param _enabled Whether to enable publishing
                     * 
                     */
                    void SetEnabled(const int64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CreateTime Creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _createTime Creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Either `cdn` or `ecdn`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Channel Either `cdn` or `ecdn`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Either `cdn` or `ecdn`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _channel Either `cdn` or `ecdn`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Deleted Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _deleted Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Whether to enable publishing
                     */
                    int64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Either `cdn` or `ecdn`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Whether the logset has been removed from CLS
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_
