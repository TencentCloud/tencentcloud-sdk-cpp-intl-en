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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceAssetDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceContainerDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceImageDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceHostDetailInfo.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceK8SDetailInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetDetailInfo response structure.
                */
                class DescribeComplianceAssetDetailInfoResponse : public AbstractModel
                {
                public:
                    DescribeComplianceAssetDetailInfoResponse();
                    ~DescribeComplianceAssetDetailInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset details
                     * @return AssetDetailInfo Asset details
                     * 
                     */
                    ComplianceAssetDetailInfo GetAssetDetailInfo() const;

                    /**
                     * 判断参数 AssetDetailInfo 是否已赋值
                     * @return AssetDetailInfo 是否已赋值
                     * 
                     */
                    bool AssetDetailInfoHasBeenSet() const;

                    /**
                     * 获取This field is returned when the asset is a container.
                     * @return ContainerDetailInfo This field is returned when the asset is a container.
                     * 
                     */
                    ComplianceContainerDetailInfo GetContainerDetailInfo() const;

                    /**
                     * 判断参数 ContainerDetailInfo 是否已赋值
                     * @return ContainerDetailInfo 是否已赋值
                     * 
                     */
                    bool ContainerDetailInfoHasBeenSet() const;

                    /**
                     * 获取When the asset is a mirror, return this field.
                     * @return ImageDetailInfo When the asset is a mirror, return this field.
                     * 
                     */
                    ComplianceImageDetailInfo GetImageDetailInfo() const;

                    /**
                     * 判断参数 ImageDetailInfo 是否已赋值
                     * @return ImageDetailInfo 是否已赋值
                     * 
                     */
                    bool ImageDetailInfoHasBeenSet() const;

                    /**
                     * 获取This field is returned when the asset is a host.
                     * @return HostDetailInfo This field is returned when the asset is a host.
                     * 
                     */
                    ComplianceHostDetailInfo GetHostDetailInfo() const;

                    /**
                     * 判断参数 HostDetailInfo 是否已赋值
                     * @return HostDetailInfo 是否已赋值
                     * 
                     */
                    bool HostDetailInfoHasBeenSet() const;

                    /**
                     * 获取When the asset is K8S, return this field.
                     * @return K8SDetailInfo When the asset is K8S, return this field.
                     * 
                     */
                    ComplianceK8SDetailInfo GetK8SDetailInfo() const;

                    /**
                     * 判断参数 K8SDetailInfo 是否已赋值
                     * @return K8SDetailInfo 是否已赋值
                     * 
                     */
                    bool K8SDetailInfoHasBeenSet() const;

                private:

                    /**
                     * Asset details
                     */
                    ComplianceAssetDetailInfo m_assetDetailInfo;
                    bool m_assetDetailInfoHasBeenSet;

                    /**
                     * This field is returned when the asset is a container.
                     */
                    ComplianceContainerDetailInfo m_containerDetailInfo;
                    bool m_containerDetailInfoHasBeenSet;

                    /**
                     * When the asset is a mirror, return this field.
                     */
                    ComplianceImageDetailInfo m_imageDetailInfo;
                    bool m_imageDetailInfoHasBeenSet;

                    /**
                     * This field is returned when the asset is a host.
                     */
                    ComplianceHostDetailInfo m_hostDetailInfo;
                    bool m_hostDetailInfoHasBeenSet;

                    /**
                     * When the asset is K8S, return this field.
                     */
                    ComplianceK8SDetailInfo m_k8SDetailInfo;
                    bool m_k8SDetailInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFORESPONSE_H_
