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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HOSTVOLUMECONTEXT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HOSTVOLUMECONTEXT_H_

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
                * Description of `HostPath` mounting method in the pod
                */
                class HostVolumeContext : public AbstractModel
                {
                public:
                    HostVolumeContext();
                    ~HostVolumeContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The directory for mounting the host in the pod, which is the mount point of the host in the resource. A specified mount point corresponds to the host path and is used as the data storage directory in the pod.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VolumePath The directory for mounting the host in the pod, which is the mount point of the host in the resource. A specified mount point corresponds to the host path and is used as the data storage directory in the pod.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVolumePath() const;

                    /**
                     * 设置The directory for mounting the host in the pod, which is the mount point of the host in the resource. A specified mount point corresponds to the host path and is used as the data storage directory in the pod.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VolumePath The directory for mounting the host in the pod, which is the mount point of the host in the resource. A specified mount point corresponds to the host path and is used as the data storage directory in the pod.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVolumePath(const std::string& _volumePath);

                    /**
                     * 判断参数 VolumePath 是否已赋值
                     * @return VolumePath 是否已赋值
                     */
                    bool VolumePathHasBeenSet() const;

                private:

                    /**
                     * The directory for mounting the host in the pod, which is the mount point of the host in the resource. A specified mount point corresponds to the host path and is used as the data storage directory in the pod.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_volumePath;
                    bool m_volumePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HOSTVOLUMECONTEXT_H_
