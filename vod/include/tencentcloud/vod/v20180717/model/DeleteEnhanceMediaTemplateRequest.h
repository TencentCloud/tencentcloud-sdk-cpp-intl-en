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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEENHANCEMEDIATEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEENHANCEMEDIATEMPLATEREQUEST_H_

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
                * DeleteEnhanceMediaTemplate request structure.
                */
                class DeleteEnhanceMediaTemplateRequest : public AbstractModel
                {
                public:
                    DeleteEnhanceMediaTemplateRequest();
                    ~DeleteEnhanceMediaTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enhance Media Template ID
                     * @return Definition Enhance Media Template ID
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Enhance Media Template ID
                     * @param _definition Enhance Media Template ID
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @return SubAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @param _subAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Enhance Media Template ID
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEENHANCEMEDIATEMPLATEREQUEST_H_