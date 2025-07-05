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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CLSNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CLSNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * The operation of pushing alarm notifications to CLS
                */
                class CLSNotice : public AbstractModel
                {
                public:
                    CLSNotice();
                    ~CLSNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Logset ID.
                     * @return LogSetId Logset ID.
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Logset ID.
                     * @param _logSetId Logset ID.
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Topic ID.
                     * @return TopicId Topic ID.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID.
                     * @param _topicId Topic ID.
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
                     * 获取Status. Valid values: `0` (disabled), `1` (enabled). Default value: `1` (enabled). This parameter can be left empty.
                     * @return Enable Status. Valid values: `0` (disabled), `1` (enabled). Default value: `1` (enabled). This parameter can be left empty.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Status. Valid values: `0` (disabled), `1` (enabled). Default value: `1` (enabled). This parameter can be left empty.
                     * @param _enable Status. Valid values: `0` (disabled), `1` (enabled). Default value: `1` (enabled). This parameter can be left empty.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Logset ID.
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Topic ID.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Status. Valid values: `0` (disabled), `1` (enabled). Default value: `1` (enabled). This parameter can be left empty.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CLSNOTICE_H_
