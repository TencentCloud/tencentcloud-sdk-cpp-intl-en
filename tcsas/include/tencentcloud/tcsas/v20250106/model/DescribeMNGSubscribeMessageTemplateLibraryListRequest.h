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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYLISTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeMNGSubscribeMessageTemplateLibraryList request structure.
                */
                class DescribeMNGSubscribeMessageTemplateLibraryListRequest : public AbstractModel
                {
                public:
                    DescribeMNGSubscribeMessageTemplateLibraryListRequest();
                    ~DescribeMNGSubscribeMessageTemplateLibraryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini program appid.</p>
                     * @return MNPId <p>Mini program appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program appid.</p>
                     * @param _mNPId <p>Mini program appid.</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取<p>Limit.</p>
                     * @return Limit <p>Limit.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Limit.</p>
                     * @param _limit <p>Limit.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Query type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @return QueryType <p>Query type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    int64_t GetQueryType() const;

                    /**
                     * 设置<p>Query type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @param _queryType <p>Query type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    void SetQueryType(const int64_t& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset.</p>
                     * @return Offset <p>Pagination offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset.</p>
                     * @param _offset <p>Pagination offset.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Limit.</p>
                     * @return QueryStr <p>Limit.</p>
                     * 
                     */
                    std::string GetQueryStr() const;

                    /**
                     * 设置<p>Limit.</p>
                     * @param _queryStr <p>Limit.</p>
                     * 
                     */
                    void SetQueryStr(const std::string& _queryStr);

                    /**
                     * 判断参数 QueryStr 是否已赋值
                     * @return QueryStr 是否已赋值
                     * 
                     */
                    bool QueryStrHasBeenSet() const;

                private:

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Limit.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Query type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     */
                    int64_t m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * <p>Pagination offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Limit.</p>
                     */
                    std::string m_queryStr;
                    bool m_queryStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYLISTREQUEST_H_
