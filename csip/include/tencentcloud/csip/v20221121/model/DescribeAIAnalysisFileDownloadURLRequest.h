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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISFILEDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISFILEDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisFileDownloadURL request structure.
                */
                class DescribeAIAnalysisFileDownloadURLRequest : public AbstractModel
                {
                public:
                    DescribeAIAnalysisFileDownloadURLRequest();
                    ~DescribeAIAnalysisFileDownloadURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Original file download URL, up to 2048 characters. It can be obtained from the file information returned by the AI analysis streaming API.</p>
                     * @return Url <p>Original file download URL, up to 2048 characters. It can be obtained from the file information returned by the AI analysis streaming API.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Original file download URL, up to 2048 characters. It can be obtained from the file information returned by the AI analysis streaming API.</p>
                     * @param _url <p>Original file download URL, up to 2048 characters. It can be obtained from the file information returned by the AI analysis streaming API.</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * <p>Original file download URL, up to 2048 characters. It can be obtained from the file information returned by the AI analysis streaming API.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISFILEDOWNLOADURLREQUEST_H_
