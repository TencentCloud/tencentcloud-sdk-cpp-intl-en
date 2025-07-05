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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ExportZoneConfig response structure.
                */
                class ExportZoneConfigResponse : public AbstractModel
                {
                public:
                    ExportZoneConfigResponse();
                    ~ExportZoneConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The specific content of the exported configuration, returned in the JSON format and encoded in the UTF-8 mode. Refer to the example below for the configuration content.
                     * @return Content The specific content of the exported configuration, returned in the JSON format and encoded in the UTF-8 mode. Refer to the example below for the configuration content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * The specific content of the exported configuration, returned in the JSON format and encoded in the UTF-8 mode. Refer to the example below for the configuration content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXPORTZONECONFIGRESPONSE_H_
