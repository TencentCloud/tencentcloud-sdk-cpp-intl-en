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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETTKEAPPCHARTLISTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETTKEAPPCHARTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetTkeAppChartList request structure.
                */
                class GetTkeAppChartListRequest : public AbstractModel
                {
                public:
                    GetTkeAppChartListRequest();
                    ~GetTkeAppChartListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type specifies the application category. valid values include log, scheduler, network, storage, monitor, dns, image, other, and invisible.
                     * @return Kind Type specifies the application category. valid values include log, scheduler, network, storage, monitor, dns, image, other, and invisible.
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Type specifies the application category. valid values include log, scheduler, network, storage, monitor, dns, image, other, and invisible.
                     * @param _kind Type specifies the application category. valid values include log, scheduler, network, storage, monitor, dns, image, other, and invisible.
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Specifies the supported operating systems of the app. valid values: arm32, arm64, amd64.
                     * @return Arch Specifies the supported operating systems of the app. valid values: arm32, arm64, amd64.
                     * 
                     */
                    std::string GetArch() const;

                    /**
                     * 设置Specifies the supported operating systems of the app. valid values: arm32, arm64, amd64.
                     * @param _arch Specifies the supported operating systems of the app. valid values: arm32, arm64, amd64.
                     * 
                     */
                    void SetArch(const std::string& _arch);

                    /**
                     * 判断参数 Arch 是否已赋值
                     * @return Arch 是否已赋值
                     * 
                     */
                    bool ArchHasBeenSet() const;

                    /**
                     * 获取ClusterType specifies the type of the cluster. valid values are tke and eks.
                     * @return ClusterType ClusterType specifies the type of the cluster. valid values are tke and eks.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置ClusterType specifies the type of the cluster. valid values are tke and eks.
                     * @param _clusterType ClusterType specifies the type of the cluster. valid values are tke and eks.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Type specifies the application category. valid values include log, scheduler, network, storage, monitor, dns, image, other, and invisible.
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Specifies the supported operating systems of the app. valid values: arm32, arm64, amd64.
                     */
                    std::string m_arch;
                    bool m_archHasBeenSet;

                    /**
                     * ClusterType specifies the type of the cluster. valid values are tke and eks.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETTKEAPPCHARTLISTREQUEST_H_
