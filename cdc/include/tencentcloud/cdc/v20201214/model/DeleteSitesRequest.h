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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DELETESITESREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DELETESITESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DeleteSites request structure.
                */
                class DeleteSitesRequest : public AbstractModel
                {
                public:
                    DeleteSitesRequest();
                    ~DeleteSitesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of site ids to be deleted
                     * @return SiteIds List of site ids to be deleted
                     * 
                     */
                    std::vector<std::string> GetSiteIds() const;

                    /**
                     * 设置List of site ids to be deleted
                     * @param _siteIds List of site ids to be deleted
                     * 
                     */
                    void SetSiteIds(const std::vector<std::string>& _siteIds);

                    /**
                     * 判断参数 SiteIds 是否已赋值
                     * @return SiteIds 是否已赋值
                     * 
                     */
                    bool SiteIdsHasBeenSet() const;

                private:

                    /**
                     * List of site ids to be deleted
                     */
                    std::vector<std::string> m_siteIds;
                    bool m_siteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DELETESITESREQUEST_H_
