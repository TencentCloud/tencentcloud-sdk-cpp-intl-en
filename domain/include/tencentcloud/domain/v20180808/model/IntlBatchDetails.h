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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLBATCHDETAILS_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLBATCHDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The details of the bulk task
                */
                class IntlBatchDetails : public AbstractModel
                {
                public:
                    IntlBatchDetails();
                    ~IntlBatchDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the bulk task.
                     * @return Id The ID of the bulk task.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置The ID of the bulk task.
                     * @param _id The ID of the bulk task.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The task status.
                     * @return Status The task status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status.
                     * @param _status The task status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The reason.
                     * @return Reason The reason.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置The reason.
                     * @param _reason The reason.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取The reason, expressed in Chinese.
                     * @return ReasonZh The reason, expressed in Chinese.
                     * 
                     */
                    std::string GetReasonZh() const;

                    /**
                     * 设置The reason, expressed in Chinese.
                     * @param _reasonZh The reason, expressed in Chinese.
                     * 
                     */
                    void SetReasonZh(const std::string& _reasonZh);

                    /**
                     * 判断参数 ReasonZh 是否已赋值
                     * @return ReasonZh 是否已赋值
                     * 
                     */
                    bool ReasonZhHasBeenSet() const;

                private:

                    /**
                     * The ID of the bulk task.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The task status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The reason.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * The reason, expressed in Chinese.
                     */
                    std::string m_reasonZh;
                    bool m_reasonZhHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_INTLBATCHDETAILS_H_
