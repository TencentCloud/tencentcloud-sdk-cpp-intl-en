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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Aggregated data on the HTTP status codes of business traffic
                */
                class HttpStatusMap : public AbstractModel
                {
                public:
                    HttpStatusMap();
                    ~HttpStatusMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP 2xx Status code
                     * @return Http2xx HTTP 2xx Status code
                     */
                    std::vector<double> GetHttp2xx() const;

                    /**
                     * 设置HTTP 2xx Status code
                     * @param Http2xx HTTP 2xx Status code
                     */
                    void SetHttp2xx(const std::vector<double>& _http2xx);

                    /**
                     * 判断参数 Http2xx 是否已赋值
                     * @return Http2xx 是否已赋值
                     */
                    bool Http2xxHasBeenSet() const;

                    /**
                     * 获取HTTP 3xx Status code
                     * @return Http3xx HTTP 3xx Status code
                     */
                    std::vector<double> GetHttp3xx() const;

                    /**
                     * 设置HTTP 3xx Status code
                     * @param Http3xx HTTP 3xx Status code
                     */
                    void SetHttp3xx(const std::vector<double>& _http3xx);

                    /**
                     * 判断参数 Http3xx 是否已赋值
                     * @return Http3xx 是否已赋值
                     */
                    bool Http3xxHasBeenSet() const;

                    /**
                     * 获取HTTP 404 Status code
                     * @return Http404 HTTP 404 Status code
                     */
                    std::vector<double> GetHttp404() const;

                    /**
                     * 设置HTTP 404 Status code
                     * @param Http404 HTTP 404 Status code
                     */
                    void SetHttp404(const std::vector<double>& _http404);

                    /**
                     * 判断参数 Http404 是否已赋值
                     * @return Http404 是否已赋值
                     */
                    bool Http404HasBeenSet() const;

                    /**
                     * 获取HTTP 4xx Status code
                     * @return Http4xx HTTP 4xx Status code
                     */
                    std::vector<double> GetHttp4xx() const;

                    /**
                     * 设置HTTP 4xx Status code
                     * @param Http4xx HTTP 4xx Status code
                     */
                    void SetHttp4xx(const std::vector<double>& _http4xx);

                    /**
                     * 判断参数 Http4xx 是否已赋值
                     * @return Http4xx 是否已赋值
                     */
                    bool Http4xxHasBeenSet() const;

                    /**
                     * 获取HTTP 5xx Status code
                     * @return Http5xx HTTP 5xx Status code
                     */
                    std::vector<double> GetHttp5xx() const;

                    /**
                     * 设置HTTP 5xx Status code
                     * @param Http5xx HTTP 5xx Status code
                     */
                    void SetHttp5xx(const std::vector<double>& _http5xx);

                    /**
                     * 判断参数 Http5xx 是否已赋值
                     * @return Http5xx 是否已赋值
                     */
                    bool Http5xxHasBeenSet() const;

                    /**
                     * 获取HTTP 2xx Forwarding status code
                     * @return SourceHttp2xx HTTP 2xx Forwarding status code
                     */
                    std::vector<double> GetSourceHttp2xx() const;

                    /**
                     * 设置HTTP 2xx Forwarding status code
                     * @param SourceHttp2xx HTTP 2xx Forwarding status code
                     */
                    void SetSourceHttp2xx(const std::vector<double>& _sourceHttp2xx);

                    /**
                     * 判断参数 SourceHttp2xx 是否已赋值
                     * @return SourceHttp2xx 是否已赋值
                     */
                    bool SourceHttp2xxHasBeenSet() const;

                    /**
                     * 获取HTTP 3xx Forwarding status code
                     * @return SourceHttp3xx HTTP 3xx Forwarding status code
                     */
                    std::vector<double> GetSourceHttp3xx() const;

                    /**
                     * 设置HTTP 3xx Forwarding status code
                     * @param SourceHttp3xx HTTP 3xx Forwarding status code
                     */
                    void SetSourceHttp3xx(const std::vector<double>& _sourceHttp3xx);

                    /**
                     * 判断参数 SourceHttp3xx 是否已赋值
                     * @return SourceHttp3xx 是否已赋值
                     */
                    bool SourceHttp3xxHasBeenSet() const;

                    /**
                     * 获取HTTP 404 Forwarding status code
                     * @return SourceHttp404 HTTP 404 Forwarding status code
                     */
                    std::vector<double> GetSourceHttp404() const;

                    /**
                     * 设置HTTP 404 Forwarding status code
                     * @param SourceHttp404 HTTP 404 Forwarding status code
                     */
                    void SetSourceHttp404(const std::vector<double>& _sourceHttp404);

                    /**
                     * 判断参数 SourceHttp404 是否已赋值
                     * @return SourceHttp404 是否已赋值
                     */
                    bool SourceHttp404HasBeenSet() const;

                    /**
                     * 获取HTTP 4xx Forwarding status code
                     * @return SourceHttp4xx HTTP 4xx Forwarding status code
                     */
                    std::vector<double> GetSourceHttp4xx() const;

                    /**
                     * 设置HTTP 4xx Forwarding status code
                     * @param SourceHttp4xx HTTP 4xx Forwarding status code
                     */
                    void SetSourceHttp4xx(const std::vector<double>& _sourceHttp4xx);

                    /**
                     * 判断参数 SourceHttp4xx 是否已赋值
                     * @return SourceHttp4xx 是否已赋值
                     */
                    bool SourceHttp4xxHasBeenSet() const;

                    /**
                     * 获取HTTP 5xx Forwarding status code
                     * @return SourceHttp5xx HTTP 5xx Forwarding status code
                     */
                    std::vector<double> GetSourceHttp5xx() const;

                    /**
                     * 设置HTTP 5xx Forwarding status code
                     * @param SourceHttp5xx HTTP 5xx Forwarding status code
                     */
                    void SetSourceHttp5xx(const std::vector<double>& _sourceHttp5xx);

                    /**
                     * 判断参数 SourceHttp5xx 是否已赋值
                     * @return SourceHttp5xx 是否已赋值
                     */
                    bool SourceHttp5xxHasBeenSet() const;

                private:

                    /**
                     * HTTP 2xx Status code
                     */
                    std::vector<double> m_http2xx;
                    bool m_http2xxHasBeenSet;

                    /**
                     * HTTP 3xx Status code
                     */
                    std::vector<double> m_http3xx;
                    bool m_http3xxHasBeenSet;

                    /**
                     * HTTP 404 Status code
                     */
                    std::vector<double> m_http404;
                    bool m_http404HasBeenSet;

                    /**
                     * HTTP 4xx Status code
                     */
                    std::vector<double> m_http4xx;
                    bool m_http4xxHasBeenSet;

                    /**
                     * HTTP 5xx Status code
                     */
                    std::vector<double> m_http5xx;
                    bool m_http5xxHasBeenSet;

                    /**
                     * HTTP 2xx Forwarding status code
                     */
                    std::vector<double> m_sourceHttp2xx;
                    bool m_sourceHttp2xxHasBeenSet;

                    /**
                     * HTTP 3xx Forwarding status code
                     */
                    std::vector<double> m_sourceHttp3xx;
                    bool m_sourceHttp3xxHasBeenSet;

                    /**
                     * HTTP 404 Forwarding status code
                     */
                    std::vector<double> m_sourceHttp404;
                    bool m_sourceHttp404HasBeenSet;

                    /**
                     * HTTP 4xx Forwarding status code
                     */
                    std::vector<double> m_sourceHttp4xx;
                    bool m_sourceHttp4xxHasBeenSet;

                    /**
                     * HTTP 5xx Forwarding status code
                     */
                    std::vector<double> m_sourceHttp5xx;
                    bool m_sourceHttp5xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_HTTPSTATUSMAP_H_
