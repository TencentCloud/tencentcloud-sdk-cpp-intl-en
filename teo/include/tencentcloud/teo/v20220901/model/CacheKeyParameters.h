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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyQueryString.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyHeader.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyCookie.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom Cache Key config.
                */
                class CacheKeyParameters : public AbstractModel
                {
                public:
                    CacheKeyParameters();
                    ~CacheKeyParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch for retaining the complete query string. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured. this field and querystring.switch must be set simultaneously, but cannot both be on.
                     * @return FullURLCache Switch for retaining the complete query string. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured. this field and querystring.switch must be set simultaneously, but cannot both be on.
                     * 
                     */
                    std::string GetFullURLCache() const;

                    /**
                     * 设置Switch for retaining the complete query string. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured. this field and querystring.switch must be set simultaneously, but cannot both be on.
                     * @param _fullURLCache Switch for retaining the complete query string. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured. this field and querystring.switch must be set simultaneously, but cannot both be on.
                     * 
                     */
                    void SetFullURLCache(const std::string& _fullURLCache);

                    /**
                     * 判断参数 FullURLCache 是否已赋值
                     * @return FullURLCache 是否已赋值
                     * 
                     */
                    bool FullURLCacheHasBeenSet() const;

                    /**
                     * 获取Query string retention configuration parameter. This field and FullURLCache must be set both at the same time, but cannot both be on.
                     * @return QueryString Query string retention configuration parameter. This field and FullURLCache must be set both at the same time, but cannot both be on.
                     * 
                     */
                    CacheKeyQueryString GetQueryString() const;

                    /**
                     * 设置Query string retention configuration parameter. This field and FullURLCache must be set both at the same time, but cannot both be on.
                     * @param _queryString Query string retention configuration parameter. This field and FullURLCache must be set both at the same time, but cannot both be on.
                     * 
                     */
                    void SetQueryString(const CacheKeyQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Switch for ignoring case. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * @return IgnoreCase Switch for ignoring case. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置Switch for ignoring case. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * @param _ignoreCase Switch for ignoring case. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * 
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取HTTP request header configuration parameter. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * @return Header HTTP request header configuration parameter. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * 
                     */
                    CacheKeyHeader GetHeader() const;

                    /**
                     * 设置HTTP request header configuration parameter. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * @param _header HTTP request header configuration parameter. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * 
                     */
                    void SetHeader(const CacheKeyHeader& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取Request protocol switch. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * @return Scheme Request protocol switch. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Request protocol switch. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * @param _scheme Request protocol switch. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Cookie configuration parameters. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * @return Cookie Cookie configuration parameters. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * 
                     */
                    CacheKeyCookie GetCookie() const;

                    /**
                     * 设置Cookie configuration parameters. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * @param _cookie Cookie configuration parameters. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     * 
                     */
                    void SetCookie(const CacheKeyCookie& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * Switch for retaining the complete query string. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured. this field and querystring.switch must be set simultaneously, but cannot both be on.
                     */
                    std::string m_fullURLCache;
                    bool m_fullURLCacheHasBeenSet;

                    /**
                     * Query string retention configuration parameter. This field and FullURLCache must be set both at the same time, but cannot both be on.
                     */
                    CacheKeyQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Switch for ignoring case. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * HTTP request header configuration parameter. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     */
                    CacheKeyHeader m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * Request protocol switch. valid values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li> note: at least one of fullurlcache, ignorecase, header, scheme, or cookie must be configured.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Cookie configuration parameters. Set at least one configuration among FullURLCache, IgnoreCase, Header, Scheme, and Cookie.
                     */
                    CacheKeyCookie m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_
