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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Additional container configuration.
                */
                class ContainerExtraConf : public AbstractModel
                {
                public:
                    ContainerExtraConf();
                    ~ContainerExtraConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Proxy access type for computing jobs, such as Spark jobs and the RayCluster UI. If not specified, Internal is used by default.</p><p>Enumeration values:</p><ul><li>Internal: access through the private network LB proxy.</li><li>Public: access through the public network LB proxy.</li><li>None: No LB proxy access is created.</li></ul>
                     * @return JobAccessProxyType <p>Proxy access type for computing jobs, such as Spark jobs and the RayCluster UI. If not specified, Internal is used by default.</p><p>Enumeration values:</p><ul><li>Internal: access through the private network LB proxy.</li><li>Public: access through the public network LB proxy.</li><li>None: No LB proxy access is created.</li></ul>
                     * 
                     */
                    std::string GetJobAccessProxyType() const;

                    /**
                     * 设置<p>Proxy access type for computing jobs, such as Spark jobs and the RayCluster UI. If not specified, Internal is used by default.</p><p>Enumeration values:</p><ul><li>Internal: access through the private network LB proxy.</li><li>Public: access through the public network LB proxy.</li><li>None: No LB proxy access is created.</li></ul>
                     * @param _jobAccessProxyType <p>Proxy access type for computing jobs, such as Spark jobs and the RayCluster UI. If not specified, Internal is used by default.</p><p>Enumeration values:</p><ul><li>Internal: access through the private network LB proxy.</li><li>Public: access through the public network LB proxy.</li><li>None: No LB proxy access is created.</li></ul>
                     * 
                     */
                    void SetJobAccessProxyType(const std::string& _jobAccessProxyType);

                    /**
                     * 判断参数 JobAccessProxyType 是否已赋值
                     * @return JobAccessProxyType 是否已赋值
                     * 
                     */
                    bool JobAccessProxyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Proxy access type for computing jobs, such as Spark jobs and the RayCluster UI. If not specified, Internal is used by default.</p><p>Enumeration values:</p><ul><li>Internal: access through the private network LB proxy.</li><li>Public: access through the public network LB proxy.</li><li>None: No LB proxy access is created.</li></ul>
                     */
                    std::string m_jobAccessProxyType;
                    bool m_jobAccessProxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_
