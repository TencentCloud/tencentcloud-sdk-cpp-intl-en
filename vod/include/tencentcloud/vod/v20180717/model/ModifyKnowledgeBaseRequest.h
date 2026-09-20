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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_

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
                * ModifyKnowledgeBase request structure.
                */
                class ModifyKnowledgeBaseRequest : public AbstractModel
                {
                public:
                    ModifyKnowledgeBaseRequest();
                    ~ModifyKnowledgeBaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services after December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * @return SubAppId <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services after December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services after December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * @param _subAppId <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services after December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
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
                     * 获取<p>ID of the knowledge base to modify.</p>
                     * @return KnowledgeBaseId <p>ID of the knowledge base to modify.</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>ID of the knowledge base to modify.</p>
                     * @param _knowledgeBaseId <p>ID of the knowledge base to modify.</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>New knowledge base name. Length limit: 1-64 characters.</p>
                     * @return Name <p>New knowledge base name. Length limit: 1-64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>New knowledge base name. Length limit: 1-64 characters.</p>
                     * @param _name <p>New knowledge base name. Length limit: 1-64 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>New repository description. Length limit: up to 256 characters.</p>
                     * @return Description <p>New repository description. Length limit: up to 256 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>New repository description. Length limit: up to 256 characters.</p>
                     * @param _description <p>New repository description. Length limit: up to 256 characters.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate VOD services after December 25, 2023, this field must be filled in with the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>ID of the knowledge base to modify.</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>New knowledge base name. Length limit: 1-64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>New repository description. Length limit: up to 256 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYKNOWLEDGEBASEREQUEST_H_
