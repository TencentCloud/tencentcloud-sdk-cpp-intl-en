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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListCosEnableRegion request structure.
                */
                class ListCosEnableRegionRequest : public AbstractModel
                {
                public:
                    ListCosEnableRegionRequest();
                    ~ListCosEnableRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Website type. zh: Chinese mainland (default); en: outside Chinese mainland.
                     * @return WebsiteType Website type. zh: Chinese mainland (default); en: outside Chinese mainland.
                     * 
                     */
                    std::string GetWebsiteType() const;

                    /**
                     * 设置Website type. zh: Chinese mainland (default); en: outside Chinese mainland.
                     * @param _websiteType Website type. zh: Chinese mainland (default); en: outside Chinese mainland.
                     * 
                     */
                    void SetWebsiteType(const std::string& _websiteType);

                    /**
                     * 判断参数 WebsiteType 是否已赋值
                     * @return WebsiteType 是否已赋值
                     * 
                     */
                    bool WebsiteTypeHasBeenSet() const;

                private:

                    /**
                     * Website type. zh: Chinese mainland (default); en: outside Chinese mainland.
                     */
                    std::string m_websiteType;
                    bool m_websiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_
