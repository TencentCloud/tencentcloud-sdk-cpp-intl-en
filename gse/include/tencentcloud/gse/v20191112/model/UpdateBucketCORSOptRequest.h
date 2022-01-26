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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateBucketCORSOpt request structure.
                */
                class UpdateBucketCORSOptRequest : public AbstractModel
                {
                public:
                    UpdateBucketCORSOptRequest();
                    ~UpdateBucketCORSOptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Allowed access source. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @return AllowedOrigins Allowed access source. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> GetAllowedOrigins() const;

                    /**
                     * 设置Allowed access source. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @param AllowedOrigins Allowed access source. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    void SetAllowedOrigins(const std::vector<std::string>& _allowedOrigins);

                    /**
                     * 判断参数 AllowedOrigins 是否已赋值
                     * @return AllowedOrigins 是否已赋值
                     */
                    bool AllowedOriginsHasBeenSet() const;

                    /**
                     * 获取Allowed HTTP method(s). Multiple methods are allowed, including PUT, GET, POST, and HEAD. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @return AllowedMethods Allowed HTTP method(s). Multiple methods are allowed, including PUT, GET, POST, and HEAD. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> GetAllowedMethods() const;

                    /**
                     * 设置Allowed HTTP method(s). Multiple methods are allowed, including PUT, GET, POST, and HEAD. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @param AllowedMethods Allowed HTTP method(s). Multiple methods are allowed, including PUT, GET, POST, and HEAD. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    void SetAllowedMethods(const std::vector<std::string>& _allowedMethods);

                    /**
                     * 判断参数 AllowedMethods 是否已赋值
                     * @return AllowedMethods 是否已赋值
                     */
                    bool AllowedMethodsHasBeenSet() const;

                    /**
                     * 获取Specifies the custom HTTP request headers that the browser is allowed to include in a CORS request. Wildcard (*) is supported, indicating allowing all headers (recommended). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @return AllowedHeaders Specifies the custom HTTP request headers that the browser is allowed to include in a CORS request. Wildcard (*) is supported, indicating allowing all headers (recommended). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> GetAllowedHeaders() const;

                    /**
                     * 设置Specifies the custom HTTP request headers that the browser is allowed to include in a CORS request. Wildcard (*) is supported, indicating allowing all headers (recommended). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @param AllowedHeaders Specifies the custom HTTP request headers that the browser is allowed to include in a CORS request. Wildcard (*) is supported, indicating allowing all headers (recommended). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    void SetAllowedHeaders(const std::vector<std::string>& _allowedHeaders);

                    /**
                     * 判断参数 AllowedHeaders 是否已赋值
                     * @return AllowedHeaders 是否已赋值
                     */
                    bool AllowedHeadersHasBeenSet() const;

                    /**
                     * 获取Sets the validity duration for the CORS configuration (in second). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @return MaxAgeSeconds Sets the validity duration for the CORS configuration (in second). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    int64_t GetMaxAgeSeconds() const;

                    /**
                     * 设置Sets the validity duration for the CORS configuration (in second). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @param MaxAgeSeconds Sets the validity duration for the CORS configuration (in second). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    void SetMaxAgeSeconds(const int64_t& _maxAgeSeconds);

                    /**
                     * 判断参数 MaxAgeSeconds 是否已赋值
                     * @return MaxAgeSeconds 是否已赋值
                     */
                    bool MaxAgeSecondsHasBeenSet() const;

                    /**
                     * 获取CORS response header(s) that can be exposed to the browser, case-insensitive. If this parameter is not specified, the browser can access only simple response headers Cache-Control, Content-Type, Expires, and Last-Modified by default. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @return ExposeHeaders CORS response header(s) that can be exposed to the browser, case-insensitive. If this parameter is not specified, the browser can access only simple response headers Cache-Control, Content-Type, Expires, and Last-Modified by default. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> GetExposeHeaders() const;

                    /**
                     * 设置CORS response header(s) that can be exposed to the browser, case-insensitive. If this parameter is not specified, the browser can access only simple response headers Cache-Control, Content-Type, Expires, and Last-Modified by default. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     * @param ExposeHeaders CORS response header(s) that can be exposed to the browser, case-insensitive. If this parameter is not specified, the browser can access only simple response headers Cache-Control, Content-Type, Expires, and Last-Modified by default. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    void SetExposeHeaders(const std::vector<std::string>& _exposeHeaders);

                    /**
                     * 判断参数 ExposeHeaders 是否已赋值
                     * @return ExposeHeaders 是否已赋值
                     */
                    bool ExposeHeadersHasBeenSet() const;

                private:

                    /**
                     * Allowed access source. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_allowedOrigins;
                    bool m_allowedOriginsHasBeenSet;

                    /**
                     * Allowed HTTP method(s). Multiple methods are allowed, including PUT, GET, POST, and HEAD. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_allowedMethods;
                    bool m_allowedMethodsHasBeenSet;

                    /**
                     * Specifies the custom HTTP request headers that the browser is allowed to include in a CORS request. Wildcard (*) is supported, indicating allowing all headers (recommended). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_allowedHeaders;
                    bool m_allowedHeadersHasBeenSet;

                    /**
                     * Sets the validity duration for the CORS configuration (in second). For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    int64_t m_maxAgeSeconds;
                    bool m_maxAgeSecondsHasBeenSet;

                    /**
                     * CORS response header(s) that can be exposed to the browser, case-insensitive. If this parameter is not specified, the browser can access only simple response headers Cache-Control, Content-Type, Expires, and Last-Modified by default. For details, see [COS Documentation](https://intl.cloud.tencent.com/document/product/436/8279?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_exposeHeaders;
                    bool m_exposeHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_
