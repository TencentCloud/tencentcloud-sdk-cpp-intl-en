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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/PageByNumParams.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchResourceInstances request structure.
                */
                class ListAIWorkbenchResourceInstancesRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchResourceInstancesRequest();
                    ~ListAIWorkbenchResourceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resource map ID</p>
                     * @return ResourceMapId <p>Resource map ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>Resource map ID</p>
                     * @param _resourceMapId <p>Resource map ID</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>Pagination parameters</p>
                     * @return PageParams <p>Pagination parameters</p>
                     * 
                     */
                    PageByNumParams GetPageParams() const;

                    /**
                     * 设置<p>Pagination parameters</p>
                     * @param _pageParams <p>Pagination parameters</p>
                     * 
                     */
                    void SetPageParams(const PageByNumParams& _pageParams);

                    /**
                     * 判断参数 PageParams 是否已赋值
                     * @return PageParams 是否已赋值
                     * 
                     */
                    bool PageParamsHasBeenSet() const;

                private:

                    /**
                     * <p>Resource map ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>Pagination parameters</p>
                     */
                    PageByNumParams m_pageParams;
                    bool m_pageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_
