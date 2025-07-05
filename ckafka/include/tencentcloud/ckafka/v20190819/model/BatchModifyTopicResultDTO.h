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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Results of the batch modified topic attributes
                */
                class BatchModifyTopicResultDTO : public AbstractModel
                {
                public:
                    BatchModifyTopicResultDTO();
                    ~BatchModifyTopicResultDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Topic name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TopicName Topic name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _topicName Topic name.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Status code.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReturnCode Status code.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置Status code.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _returnCode Status code.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取Message status.
                     * @return Message Message status.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Message status.
                     * @param _message Message status.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Status code.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * Message status.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICRESULTDTO_H_
