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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/HostPathVolumeSource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Data volume directory settings.
                */
                class VolumeSetting : public AbstractModel
                {
                public:
                    VolumeSetting();
                    ~VolumeSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data volume type.
<li>HOST_PATH indicates support for the local path.</li>
<li>NEW_PVC indicates creating a PVC.</li>
For the data volume types supported by component roles, see the EMR on TKE cluster deployment instructions: [Deployment Instructions](https://www.tencentcloud.com/document/product/589/94254?from_cn_redirect=1).
                     * @return VolumeType Data volume type.
<li>HOST_PATH indicates support for the local path.</li>
<li>NEW_PVC indicates creating a PVC.</li>
For the data volume types supported by component roles, see the EMR on TKE cluster deployment instructions: [Deployment Instructions](https://www.tencentcloud.com/document/product/589/94254?from_cn_redirect=1).
                     * 
                     */
                    std::string GetVolumeType() const;

                    /**
                     * 设置Data volume type.
<li>HOST_PATH indicates support for the local path.</li>
<li>NEW_PVC indicates creating a PVC.</li>
For the data volume types supported by component roles, see the EMR on TKE cluster deployment instructions: [Deployment Instructions](https://www.tencentcloud.com/document/product/589/94254?from_cn_redirect=1).
                     * @param _volumeType Data volume type.
<li>HOST_PATH indicates support for the local path.</li>
<li>NEW_PVC indicates creating a PVC.</li>
For the data volume types supported by component roles, see the EMR on TKE cluster deployment instructions: [Deployment Instructions](https://www.tencentcloud.com/document/product/589/94254?from_cn_redirect=1).
                     * 
                     */
                    void SetVolumeType(const std::string& _volumeType);

                    /**
                     * 判断参数 VolumeType 是否已赋值
                     * @return VolumeType 是否已赋值
                     * 
                     */
                    bool VolumeTypeHasBeenSet() const;

                    /**
                     * 获取Host path information.
                     * @return HostPath Host path information.
                     * 
                     */
                    HostPathVolumeSource GetHostPath() const;

                    /**
                     * 设置Host path information.
                     * @param _hostPath Host path information.
                     * 
                     */
                    void SetHostPath(const HostPathVolumeSource& _hostPath);

                    /**
                     * 判断参数 HostPath 是否已赋值
                     * @return HostPath 是否已赋值
                     * 
                     */
                    bool HostPathHasBeenSet() const;

                private:

                    /**
                     * Data volume type.
<li>HOST_PATH indicates support for the local path.</li>
<li>NEW_PVC indicates creating a PVC.</li>
For the data volume types supported by component roles, see the EMR on TKE cluster deployment instructions: [Deployment Instructions](https://www.tencentcloud.com/document/product/589/94254?from_cn_redirect=1).
                     */
                    std::string m_volumeType;
                    bool m_volumeTypeHasBeenSet;

                    /**
                     * Host path information.
                     */
                    HostPathVolumeSource m_hostPath;
                    bool m_hostPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_
