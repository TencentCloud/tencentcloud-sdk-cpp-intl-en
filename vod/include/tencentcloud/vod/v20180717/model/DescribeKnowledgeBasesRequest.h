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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEKNOWLEDGEBASESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEKNOWLEDGEBASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeBases request structure.
                */
                class DescribeKnowledgeBasesRequest : public AbstractModel
                {
                public:
                    DescribeKnowledgeBasesRequest();
                    ~DescribeKnowledgeBasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether default or newly created.</p>
                     * @return SubAppId <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether default or newly created.</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether default or newly created.</p>
                     * @param _subAppId <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether default or newly created.</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
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
                     * 获取<p>Filter by knowledge base name with exact matching. If not specified, all knowledge bases will be returned.</p>
                     * @return Name <p>Filter by knowledge base name with exact matching. If not specified, all knowledge bases will be returned.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Filter by knowledge base name with exact matching. If not specified, all knowledge bases will be returned.</p>
                     * @param _name <p>Filter by knowledge base name with exact matching. If not specified, all knowledge bases will be returned.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether default or newly created.</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter by knowledge base name with exact matching. If not specified, all knowledge bases will be returned.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEKNOWLEDGEBASESREQUEST_H_
