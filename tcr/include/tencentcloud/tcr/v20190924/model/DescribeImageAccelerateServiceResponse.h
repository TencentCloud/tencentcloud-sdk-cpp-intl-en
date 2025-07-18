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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEACCELERATESERVICERESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEACCELERATESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeImageAccelerateService response structure.
                */
                class DescribeImageAccelerateServiceResponse : public AbstractModel
                {
                public:
                    DescribeImageAccelerateServiceResponse();
                    ~DescribeImageAccelerateServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image acceleration status
                     * @return Status Image acceleration status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CFS VIP
                     * @return CFSVIP CFS VIP
                     * 
                     */
                    std::string GetCFSVIP() const;

                    /**
                     * 判断参数 CFSVIP 是否已赋值
                     * @return CFSVIP 是否已赋值
                     * 
                     */
                    bool CFSVIPHasBeenSet() const;

                    /**
                     * 获取Whether to enable
                     * @return IsEnable Whether to enable
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * Image acceleration status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CFS VIP
                     */
                    std::string m_cFSVIP;
                    bool m_cFSVIPHasBeenSet;

                    /**
                     * Whether to enable
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEACCELERATESERVICERESPONSE_H_
