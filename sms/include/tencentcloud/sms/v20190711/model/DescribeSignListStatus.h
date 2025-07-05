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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * Response for getting SMS signature information
                */
                class DescribeSignListStatus : public AbstractModel
                {
                public:
                    DescribeSignListStatus();
                    ~DescribeSignListStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Signature ID
                     * @return SignId Signature ID
                     * 
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置Signature ID
                     * @param _signId Signature ID
                     * 
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS. Valid values:
0: Mainland China SMS.
1: Global SMS
                     * @return International Whether it is Global SMS. Valid values:
0: Mainland China SMS.
1: Global SMS
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS. Valid values:
0: Mainland China SMS.
1: Global SMS
                     * @param _international Whether it is Global SMS. Valid values:
0: Mainland China SMS.
1: Global SMS
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Signature application status. Valid values:
0: approved.
-1: rejected or failed.
                     * @return StatusCode Signature application status. Valid values:
0: approved.
-1: rejected or failed.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Signature application status. Valid values:
0: approved.
-1: rejected or failed.
                     * @param _statusCode Signature application status. Valid values:
0: approved.
-1: rejected or failed.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * @return ReviewReply Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * 
                     */
                    std::string GetReviewReply() const;

                    /**
                     * 设置Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * @param _reviewReply Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     * 
                     */
                    void SetReviewReply(const std::string& _reviewReply);

                    /**
                     * 判断参数 ReviewReply 是否已赋值
                     * @return ReviewReply 是否已赋值
                     * 
                     */
                    bool ReviewReplyHasBeenSet() const;

                    /**
                     * 获取Signature name.
                     * @return SignName Signature name.
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置Signature name.
                     * @param _signName Signature name.
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取Application submission time in the format of UNIX timestamp in seconds.
                     * @return CreateTime Application submission time in the format of UNIX timestamp in seconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Application submission time in the format of UNIX timestamp in seconds.
                     * @param _createTime Application submission time in the format of UNIX timestamp in seconds.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Signature ID
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * Whether it is Global SMS. Valid values:
0: Mainland China SMS.
1: Global SMS
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Signature application status. Valid values:
0: approved.
-1: rejected or failed.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Review reply, i.e., response given by the reviewer, which is usually the reason for rejection.
                     */
                    std::string m_reviewReply;
                    bool m_reviewReplyHasBeenSet;

                    /**
                     * Signature name.
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * Application submission time in the format of UNIX timestamp in seconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_
