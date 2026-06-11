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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/OriginPrivateParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin server failover configuration parameter internal structure.
                */
                class SiteFailover : public AbstractModel
                {
                public:
                    SiteFailover();
                    ~SiteFailover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server failover type. Valid values:
<li>FailoverToHost: Fail back to the specified IP/domain.</li>
<li>FailoverToCOS: Fail back to Tencent Cloud COS;</li>
<li>FailoverToS3CompatibleObjectStorage: Fail over to S3-compatible object storage;</li>
<li> FailoverRedirectToURL: Redirect to the specified URL.</li>
<li>FailoverCustomResponsePage: Use a custom response page.</li>
                     * @return Mode Origin server failover type. Valid values:
<li>FailoverToHost: Fail back to the specified IP/domain.</li>
<li>FailoverToCOS: Fail back to Tencent Cloud COS;</li>
<li>FailoverToS3CompatibleObjectStorage: Fail over to S3-compatible object storage;</li>
<li> FailoverRedirectToURL: Redirect to the specified URL.</li>
<li>FailoverCustomResponsePage: Use a custom response page.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Origin server failover type. Valid values:
<li>FailoverToHost: Fail back to the specified IP/domain.</li>
<li>FailoverToCOS: Fail back to Tencent Cloud COS;</li>
<li>FailoverToS3CompatibleObjectStorage: Fail over to S3-compatible object storage;</li>
<li> FailoverRedirectToURL: Redirect to the specified URL.</li>
<li>FailoverCustomResponsePage: Use a custom response page.</li>
                     * @param _mode Origin server failover type. Valid values:
<li>FailoverToHost: Fail back to the specified IP/domain.</li>
<li>FailoverToCOS: Fail back to Tencent Cloud COS;</li>
<li>FailoverToS3CompatibleObjectStorage: Fail over to S3-compatible object storage;</li>
<li> FailoverRedirectToURL: Redirect to the specified URL.</li>
<li>FailoverCustomResponsePage: Use a custom response page.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Origin server address, divided into following scenarios based on the Mode value:
<li>When Mode = FailoverToHost, specify an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When Mode = FailoverToCOS, specify the access domain name of the COS bucket;</li>
<li>When Mode = FailoverToS3CompatibleObjectStorage, specify the access domain of the S3 bucket.</li>
                     * @return Origin Origin server address, divided into following scenarios based on the Mode value:
<li>When Mode = FailoverToHost, specify an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When Mode = FailoverToCOS, specify the access domain name of the COS bucket;</li>
<li>When Mode = FailoverToS3CompatibleObjectStorage, specify the access domain of the S3 bucket.</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, divided into following scenarios based on the Mode value:
<li>When Mode = FailoverToHost, specify an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When Mode = FailoverToCOS, specify the access domain name of the COS bucket;</li>
<li>When Mode = FailoverToS3CompatibleObjectStorage, specify the access domain of the S3 bucket.</li>
                     * @param _origin Origin server address, divided into following scenarios based on the Mode value:
<li>When Mode = FailoverToHost, specify an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When Mode = FailoverToCOS, specify the access domain name of the COS bucket;</li>
<li>When Mode = FailoverToS3CompatibleObjectStorage, specify the access domain of the S3 bucket.</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Protocol configuration. This parameter is required when Mode value is FailoverToHost. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Using HTTPS protocol;</li>
<li>follow: protocol following.</li>
                     * @return OriginProtocol Protocol configuration. This parameter is required when Mode value is FailoverToHost. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Using HTTPS protocol;</li>
<li>follow: protocol following.</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Protocol configuration. This parameter is required when Mode value is FailoverToHost. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Using HTTPS protocol;</li>
<li>follow: protocol following.</li>
                     * @param _originProtocol Protocol configuration. This parameter is required when Mode value is FailoverToHost. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Using HTTPS protocol;</li>
<li>follow: protocol following.</li>
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP origin port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * @return HTTPOriginPort HTTP origin port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * 
                     */
                    int64_t GetHTTPOriginPort() const;

                    /**
                     * 设置HTTP origin port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * @param _hTTPOriginPort HTTP origin port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * 
                     */
                    void SetHTTPOriginPort(const int64_t& _hTTPOriginPort);

                    /**
                     * 判断参数 HTTPOriginPort 是否已赋值
                     * @return HTTPOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS origin port, value ranges from 1–65535. This parameter is required when the origin-pull protocol OriginProtocol is https or follow.
                     * @return HTTPSOriginPort HTTPS origin port, value ranges from 1–65535. This parameter is required when the origin-pull protocol OriginProtocol is https or follow.
                     * 
                     */
                    int64_t GetHTTPSOriginPort() const;

                    /**
                     * 设置HTTPS origin port, value ranges from 1–65535. This parameter is required when the origin-pull protocol OriginProtocol is https or follow.
                     * @param _hTTPSOriginPort HTTPS origin port, value ranges from 1–65535. This parameter is required when the origin-pull protocol OriginProtocol is https or follow.
                     * 
                     */
                    void SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort);

                    /**
                     * 判断参数 HTTPSOriginPort 是否已赋值
                     * @return HTTPSOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPSOriginPortHasBeenSet() const;

                    /**
                     * 获取Host Header rewrite configuration for origin-pull
                     * @return UpstreamHostHeader Host Header rewrite configuration for origin-pull
                     * 
                     */
                    HostHeaderParameters GetUpstreamHostHeader() const;

                    /**
                     * 设置Host Header rewrite configuration for origin-pull
                     * @param _upstreamHostHeader Host Header rewrite configuration for origin-pull
                     * 
                     */
                    void SetUpstreamHostHeader(const HostHeaderParameters& _upstreamHostHeader);

                    /**
                     * 判断参数 UpstreamHostHeader 是否已赋值
                     * @return UpstreamHostHeader 是否已赋值
                     * 
                     */
                    bool UpstreamHostHeaderHasBeenSet() const;

                    /**
                     * 获取Origin-pull URL rewrite configuration.
                     * @return UpstreamURLRewrite Origin-pull URL rewrite configuration.
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewrite() const;

                    /**
                     * 设置Origin-pull URL rewrite configuration.
                     * @param _upstreamURLRewrite Origin-pull URL rewrite configuration.
                     * 
                     */
                    void SetUpstreamURLRewrite(const UpstreamURLRewriteParameters& _upstreamURLRewrite);

                    /**
                     * 判断参数 UpstreamURLRewrite 是否已赋值
                     * @return UpstreamURLRewrite 是否已赋值
                     * 
                     */
                    bool UpstreamURLRewriteHasBeenSet() const;

                    /**
                     * 获取Origin Requests parameter configuration.
                     * @return UpstreamRequestParameters Origin Requests parameter configuration.
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置Origin Requests parameter configuration.
                     * @param _upstreamRequestParameters Origin Requests parameter configuration.
                     * 
                     */
                    void SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters);

                    /**
                     * 判断参数 UpstreamRequestParameters 是否已赋值
                     * @return UpstreamRequestParameters 是否已赋值
                     * 
                     */
                    bool UpstreamRequestParametersHasBeenSet() const;

                    /**
                     * 获取HTTP2 origin-pull configuration parameters.
                     * @return UpstreamHTTP2Parameters HTTP2 origin-pull configuration parameters.
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 origin-pull configuration parameters.
                     * @param _upstreamHTTP2Parameters HTTP2 origin-pull configuration parameters.
                     * 
                     */
                    void SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters);

                    /**
                     * 判断参数 UpstreamHTTP2Parameters 是否已赋值
                     * @return UpstreamHTTP2Parameters 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取Specify whether access to the private object storage origin server is allowed. This parameter is required when the origin server type is FailoverToCOS or FailoverToS3CompatibleObjectStorage. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
                     * @return PrivateAccess Specify whether access to the private object storage origin server is allowed. This parameter is required when the origin server type is FailoverToCOS or FailoverToS3CompatibleObjectStorage. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Specify whether access to the private object storage origin server is allowed. This parameter is required when the origin server type is FailoverToCOS or FailoverToS3CompatibleObjectStorage. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
                     * @param _privateAccess Specify whether access to the private object storage origin server is allowed. This parameter is required when the origin server type is FailoverToCOS or FailoverToS3CompatibleObjectStorage. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取Private authentication parameter. This parameter is valid only when Mode = FailoverToS3CompatibleObjectStorage and PrivateAccess = on.
                     * @return PrivateParameters Private authentication parameter. This parameter is valid only when Mode = FailoverToS3CompatibleObjectStorage and PrivateAccess = on.
                     * 
                     */
                    OriginPrivateParameters GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. This parameter is valid only when Mode = FailoverToS3CompatibleObjectStorage and PrivateAccess = on.
                     * @param _privateParameters Private authentication parameter. This parameter is valid only when Mode = FailoverToS3CompatibleObjectStorage and PrivateAccess = on.
                     * 
                     */
                    void SetPrivateParameters(const OriginPrivateParameters& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                    /**
                     * 获取Redirect target URL. This parameter is required when Mode has a value of FailoverRedirectToURL.
                     * @return RedirectURL Redirect target URL. This parameter is required when Mode has a value of FailoverRedirectToURL.
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置Redirect target URL. This parameter is required when Mode has a value of FailoverRedirectToURL.
                     * @param _redirectURL Redirect target URL. This parameter is required when Mode has a value of FailoverRedirectToURL.
                     * 
                     */
                    void SetRedirectURL(const std::string& _redirectURL);

                    /**
                     * 判断参数 RedirectURL 是否已赋值
                     * @return RedirectURL 是否已赋值
                     * 
                     */
                    bool RedirectURLHasBeenSet() const;

                    /**
                     * 获取Response page ID. This parameter is required when Mode value is FailoverCustomResponsePage.
                     * @return ResponsePageId Response page ID. This parameter is required when Mode value is FailoverCustomResponsePage.
                     * 
                     */
                    std::string GetResponsePageId() const;

                    /**
                     * 设置Response page ID. This parameter is required when Mode value is FailoverCustomResponsePage.
                     * @param _responsePageId Response page ID. This parameter is required when Mode value is FailoverCustomResponsePage.
                     * 
                     */
                    void SetResponsePageId(const std::string& _responsePageId);

                    /**
                     * 判断参数 ResponsePageId 是否已赋值
                     * @return ResponsePageId 是否已赋值
                     * 
                     */
                    bool ResponsePageIdHasBeenSet() const;

                    /**
                     * 获取Response status code. This parameter is required when Mode is a value of FailoverRedirectToURL or FailoverCustomResponsePage. Valid values:
<li>When Mode = FailoverRedirectToURL, the parameter value is one of 301, 302, 303, 307, 308.</li>
<li>When Mode = FailoverCustomResponsePage, the parameter value is one of 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.</li>
                     * @return StatusCode Response status code. This parameter is required when Mode is a value of FailoverRedirectToURL or FailoverCustomResponsePage. Valid values:
<li>When Mode = FailoverRedirectToURL, the parameter value is one of 301, 302, 303, 307, 308.</li>
<li>When Mode = FailoverCustomResponsePage, the parameter value is one of 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.</li>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Response status code. This parameter is required when Mode is a value of FailoverRedirectToURL or FailoverCustomResponsePage. Valid values:
<li>When Mode = FailoverRedirectToURL, the parameter value is one of 301, 302, 303, 307, 308.</li>
<li>When Mode = FailoverCustomResponsePage, the parameter value is one of 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.</li>
                     * @param _statusCode Response status code. This parameter is required when Mode is a value of FailoverRedirectToURL or FailoverCustomResponsePage. Valid values:
<li>When Mode = FailoverRedirectToURL, the parameter value is one of 301, 302, 303, 307, 308.</li>
<li>When Mode = FailoverCustomResponsePage, the parameter value is one of 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.</li>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                private:

                    /**
                     * Origin server failover type. Valid values:
<li>FailoverToHost: Fail back to the specified IP/domain.</li>
<li>FailoverToCOS: Fail back to Tencent Cloud COS;</li>
<li>FailoverToS3CompatibleObjectStorage: Fail over to S3-compatible object storage;</li>
<li> FailoverRedirectToURL: Redirect to the specified URL.</li>
<li>FailoverCustomResponsePage: Use a custom response page.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Origin server address, divided into following scenarios based on the Mode value:
<li>When Mode = FailoverToHost, specify an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When Mode = FailoverToCOS, specify the access domain name of the COS bucket;</li>
<li>When Mode = FailoverToS3CompatibleObjectStorage, specify the access domain of the S3 bucket.</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Protocol configuration. This parameter is required when Mode value is FailoverToHost. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Using HTTPS protocol;</li>
<li>follow: protocol following.</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP origin port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     */
                    int64_t m_hTTPOriginPort;
                    bool m_hTTPOriginPortHasBeenSet;

                    /**
                     * HTTPS origin port, value ranges from 1–65535. This parameter is required when the origin-pull protocol OriginProtocol is https or follow.
                     */
                    int64_t m_hTTPSOriginPort;
                    bool m_hTTPSOriginPortHasBeenSet;

                    /**
                     * Host Header rewrite configuration for origin-pull
                     */
                    HostHeaderParameters m_upstreamHostHeader;
                    bool m_upstreamHostHeaderHasBeenSet;

                    /**
                     * Origin-pull URL rewrite configuration.
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewrite;
                    bool m_upstreamURLRewriteHasBeenSet;

                    /**
                     * Origin Requests parameter configuration.
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration parameters.
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * Specify whether access to the private object storage origin server is allowed. This parameter is required when the origin server type is FailoverToCOS or FailoverToS3CompatibleObjectStorage. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Private authentication parameter. This parameter is valid only when Mode = FailoverToS3CompatibleObjectStorage and PrivateAccess = on.
                     */
                    OriginPrivateParameters m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                    /**
                     * Redirect target URL. This parameter is required when Mode has a value of FailoverRedirectToURL.
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                    /**
                     * Response page ID. This parameter is required when Mode value is FailoverCustomResponsePage.
                     */
                    std::string m_responsePageId;
                    bool m_responsePageIdHasBeenSet;

                    /**
                     * Response status code. This parameter is required when Mode is a value of FailoverRedirectToURL or FailoverCustomResponsePage. Valid values:
<li>When Mode = FailoverRedirectToURL, the parameter value is one of 301, 302, 303, 307, 308.</li>
<li>When Mode = FailoverCustomResponsePage, the parameter value is one of 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.</li>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_
