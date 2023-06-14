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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateResource request structure.
                */
                class CreateResourceRequest : public AbstractModel
                {
                public:
                    CreateResourceRequest();
                    ~CreateResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Resource type. Valid values: `CFS` (file system), `CLS` (log service), `TSE_SRE` (registry)
                     * @return ResourceType Resource type. Valid values: `CFS` (file system), `CLS` (log service), `TSE_SRE` (registry)
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type. Valid values: `CFS` (file system), `CLS` (log service), `TSE_SRE` (registry)
                     * @param _resourceType Resource type. Valid values: `CFS` (file system), `CLS` (log service), `TSE_SRE` (registry)
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取Source of the resource. Values: `existing` (choose an existing resource), `creating` (create a new resource)
                     * @return ResourceFrom Source of the resource. Values: `existing` (choose an existing resource), `creating` (create a new resource)
                     * 
                     */
                    std::string GetResourceFrom() const;

                    /**
                     * 设置Source of the resource. Values: `existing` (choose an existing resource), `creating` (create a new resource)
                     * @param _resourceFrom Source of the resource. Values: `existing` (choose an existing resource), `creating` (create a new resource)
                     * 
                     */
                    void SetResourceFrom(const std::string& _resourceFrom);

                    /**
                     * 判断参数 ResourceFrom 是否已赋值
                     * @return ResourceFrom 是否已赋值
                     * 
                     */
                    bool ResourceFromHasBeenSet() const;

                    /**
                     * 获取Resource extra configuration
                     * @return ResourceConfig Resource extra configuration
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置Resource extra configuration
                     * @param _resourceConfig Resource extra configuration
                     * 
                     */
                    void SetResourceConfig(const std::string& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Resource type. Valid values: `CFS` (file system), `CLS` (log service), `TSE_SRE` (registry)
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * Source of the resource. Values: `existing` (choose an existing resource), `creating` (create a new resource)
                     */
                    std::string m_resourceFrom;
                    bool m_resourceFromHasBeenSet;

                    /**
                     * Resource extra configuration
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_
