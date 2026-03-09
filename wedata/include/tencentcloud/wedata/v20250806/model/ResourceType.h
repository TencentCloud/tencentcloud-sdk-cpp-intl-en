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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/IntegrationResource.h>
#include <tencentcloud/wedata/v20250806/model/ResourceGroupSpecification.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Opened resource group information.
                */
                class ResourceType : public AbstractModel
                {
                public:
                    ResourceType();
                    ~ResourceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource group type

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * @return ResourceGroupType Resource group type

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * 
                     */
                    std::string GetResourceGroupType() const;

                    /**
                     * 设置Resource group type

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * @param _resourceGroupType Resource group type

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * 
                     */
                    void SetResourceGroupType(const std::string& _resourceGroupType);

                    /**
                     * 判断参数 ResourceGroupType 是否已赋值
                     * @return ResourceGroupType 是否已赋值
                     * 
                     */
                    bool ResourceGroupTypeHasBeenSet() const;

                    /**
                     * 获取Integration resource group, segmentation of real-time resource group and offline resource group (simultaneous purchase of integration, scheduling, and data service resource group not allowed).
                     * @return Integration Integration resource group, segmentation of real-time resource group and offline resource group (simultaneous purchase of integration, scheduling, and data service resource group not allowed).
                     * 
                     */
                    IntegrationResource GetIntegration() const;

                    /**
                     * 设置Integration resource group, segmentation of real-time resource group and offline resource group (simultaneous purchase of integration, scheduling, and data service resource group not allowed).
                     * @param _integration Integration resource group, segmentation of real-time resource group and offline resource group (simultaneous purchase of integration, scheduling, and data service resource group not allowed).
                     * 
                     */
                    void SetIntegration(const IntegrationResource& _integration);

                    /**
                     * 判断参数 Integration 是否已赋值
                     * @return Integration 是否已赋值
                     * 
                     */
                    bool IntegrationHasBeenSet() const;

                    /**
                     * 获取Scheduling resource group (simultaneous purchase of integration, scheduling, and data service resource groups is not allowed).

-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).



                     * @return Schedule Scheduling resource group (simultaneous purchase of integration, scheduling, and data service resource groups is not allowed).

-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).



                     * 
                     */
                    ResourceGroupSpecification GetSchedule() const;

                    /**
                     * 设置Scheduling resource group (simultaneous purchase of integration, scheduling, and data service resource groups is not allowed).

-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).



                     * @param _schedule Scheduling resource group (simultaneous purchase of integration, scheduling, and data service resource groups is not allowed).

-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).



                     * 
                     */
                    void SetSchedule(const ResourceGroupSpecification& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取Data service resource group (seamless integration, scheduling, simultaneous purchase not allowed).

-ds_t(Test specification).
-ds_s (basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * @return DataService Data service resource group (seamless integration, scheduling, simultaneous purchase not allowed).

-ds_t(Test specification).
-ds_s (basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * 
                     */
                    ResourceGroupSpecification GetDataService() const;

                    /**
                     * 设置Data service resource group (seamless integration, scheduling, simultaneous purchase not allowed).

-ds_t(Test specification).
-ds_s (basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * @param _dataService Data service resource group (seamless integration, scheduling, simultaneous purchase not allowed).

-ds_t(Test specification).
-ds_s (basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     * 
                     */
                    void SetDataService(const ResourceGroupSpecification& _dataService);

                    /**
                     * 判断参数 DataService 是否已赋值
                     * @return DataService 是否已赋值
                     * 
                     */
                    bool DataServiceHasBeenSet() const;

                private:

                    /**
                     * Resource group type

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     */
                    std::string m_resourceGroupType;
                    bool m_resourceGroupTypeHasBeenSet;

                    /**
                     * Integration resource group, segmentation of real-time resource group and offline resource group (simultaneous purchase of integration, scheduling, and data service resource group not allowed).
                     */
                    IntegrationResource m_integration;
                    bool m_integrationHasBeenSet;

                    /**
                     * Scheduling resource group (simultaneous purchase of integration, scheduling, and data service resource groups is not allowed).

-test specification.
-S_small (basic specification).
-S_medium (general specifications).
-S_large (professional specification).



                     */
                    ResourceGroupSpecification m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * Data service resource group (seamless integration, scheduling, simultaneous purchase not allowed).

-ds_t(Test specification).
-ds_s (basic specification).
-ds_m (general specifications).
-ds_l (professional specification).
                     */
                    ResourceGroupSpecification m_dataService;
                    bool m_dataServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCETYPE_H_
