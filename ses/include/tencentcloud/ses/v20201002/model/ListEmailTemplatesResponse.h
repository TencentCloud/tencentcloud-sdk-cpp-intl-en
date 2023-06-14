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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/TemplatesMetadata.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListEmailTemplates response structure.
                */
                class ListEmailTemplatesResponse : public AbstractModel
                {
                public:
                    ListEmailTemplatesResponse();
                    ~ListEmailTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of email templates.
                     * @return TemplatesMetadata List of email templates.
                     * 
                     */
                    std::vector<TemplatesMetadata> GetTemplatesMetadata() const;

                    /**
                     * 判断参数 TemplatesMetadata 是否已赋值
                     * @return TemplatesMetadata 是否已赋值
                     * 
                     */
                    bool TemplatesMetadataHasBeenSet() const;

                    /**
                     * 获取Total number of templates
                     * @return TotalCount Total number of templates
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of email templates.
                     */
                    std::vector<TemplatesMetadata> m_templatesMetadata;
                    bool m_templatesMetadataHasBeenSet;

                    /**
                     * Total number of templates
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESRESPONSE_H_
