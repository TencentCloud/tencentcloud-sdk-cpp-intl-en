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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DELETESMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DELETESMSSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteSmsSign request structure.
                */
                class DeleteSmsSignRequest : public AbstractModel
                {
                public:
                    DeleteSmsSignRequest();
                    ~DeleteSmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of signature to be deleted.
                     * @return SignId ID of signature to be deleted.
                     * 
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置ID of signature to be deleted.
                     * @param _signId ID of signature to be deleted.
                     * 
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * ID of signature to be deleted.
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DELETESMSSIGNREQUEST_H_
