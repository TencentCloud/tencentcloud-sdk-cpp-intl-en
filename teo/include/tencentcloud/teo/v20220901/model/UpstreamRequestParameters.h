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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestQueryString.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestCookie.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin-pull request parameters configuration.
                */
                class UpstreamRequestParameters : public AbstractModel
                {
                public:
                    UpstreamRequestParameters();
                    ~UpstreamRequestParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query string configuration. Optional configuration, leave blank for no configuration.
                     * @return QueryString Query string configuration. Optional configuration, leave blank for no configuration.
                     * 
                     */
                    UpstreamRequestQueryString GetQueryString() const;

                    /**
                     * 设置Query string configuration. Optional configuration, leave blank for no configuration.
                     * @param _queryString Query string configuration. Optional configuration, leave blank for no configuration.
                     * 
                     */
                    void SetQueryString(const UpstreamRequestQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Cookie configuration. Optional configuration. Leave it blank for no configuration.
                     * @return Cookie Cookie configuration. Optional configuration. Leave it blank for no configuration.
                     * 
                     */
                    UpstreamRequestCookie GetCookie() const;

                    /**
                     * 设置Cookie configuration. Optional configuration. Leave it blank for no configuration.
                     * @param _cookie Cookie configuration. Optional configuration. Leave it blank for no configuration.
                     * 
                     */
                    void SetCookie(const UpstreamRequestCookie& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * Query string configuration. Optional configuration, leave blank for no configuration.
                     */
                    UpstreamRequestQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Cookie configuration. Optional configuration. Leave it blank for no configuration.
                     */
                    UpstreamRequestCookie m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMREQUESTPARAMETERS_H_
