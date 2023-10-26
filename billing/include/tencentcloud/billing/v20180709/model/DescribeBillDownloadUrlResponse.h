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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillDownloadUrl response structure.
                */
                class DescribeBillDownloadUrlResponse : public AbstractModel
                {
                public:
                    DescribeBillDownloadUrlResponse();
                    ~DescribeBillDownloadUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates whether the bill file is ready. Valid values: `0` (the file is being generated), `1` (the file has been generated).
                     * @return Ready Indicates whether the bill file is ready. Valid values: `0` (the file is being generated), `1` (the file has been generated).
                     * 
                     */
                    int64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取Bill download URL, valid for one hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownloadUrl Bill download URL, valid for one hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * Indicates whether the bill file is ready. Valid values: `0` (the file is being generated), `1` (the file has been generated).
                     */
                    int64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * Bill download URL, valid for one hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLRESPONSE_H_
