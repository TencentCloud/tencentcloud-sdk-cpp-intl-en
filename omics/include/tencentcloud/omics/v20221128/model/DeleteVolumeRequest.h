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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEVOLUMEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DeleteVolume request structure.
                */
                class DeleteVolumeRequest : public AbstractModel
                {
                public:
                    DeleteVolumeRequest();
                    ~DeleteVolumeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Volume ID
                     * @return VolumeId Volume ID
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置Volume ID
                     * @param _volumeId Volume ID
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                private:

                    /**
                     * Volume ID
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEVOLUMEREQUEST_H_
