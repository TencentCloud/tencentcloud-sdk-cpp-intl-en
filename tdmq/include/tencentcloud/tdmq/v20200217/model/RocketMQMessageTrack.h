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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for RocketMQ message trace information
                */
                class RocketMQMessageTrack : public AbstractModel
                {
                public:
                    RocketMQMessageTrack();
                    ~RocketMQMessageTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer group
                     * @return Group Consumer group
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Consumer group
                     * @param _group Consumer group
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Consumption status
                     * @return ConsumeStatus Consumption status
                     * 
                     */
                    std::string GetConsumeStatus() const;

                    /**
                     * 设置Consumption status
                     * @param _consumeStatus Consumption status
                     * 
                     */
                    void SetConsumeStatus(const std::string& _consumeStatus);

                    /**
                     * 判断参数 ConsumeStatus 是否已赋值
                     * @return ConsumeStatus 是否已赋值
                     * 
                     */
                    bool ConsumeStatusHasBeenSet() const;

                    /**
                     * 获取Message trace type
                     * @return TrackType Message trace type
                     * 
                     */
                    std::string GetTrackType() const;

                    /**
                     * 设置Message trace type
                     * @param _trackType Message trace type
                     * 
                     */
                    void SetTrackType(const std::string& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取Exception information
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return ExceptionDesc Exception information
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExceptionDesc() const;

                    /**
                     * 设置Exception information
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _exceptionDesc Exception information
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptionDesc(const std::string& _exceptionDesc);

                    /**
                     * 判断参数 ExceptionDesc 是否已赋值
                     * @return ExceptionDesc 是否已赋值
                     * 
                     */
                    bool ExceptionDescHasBeenSet() const;

                private:

                    /**
                     * Consumer group
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Consumption status
                     */
                    std::string m_consumeStatus;
                    bool m_consumeStatusHasBeenSet;

                    /**
                     * Message trace type
                     */
                    std::string m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * Exception information
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exceptionDesc;
                    bool m_exceptionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMESSAGETRACK_H_
