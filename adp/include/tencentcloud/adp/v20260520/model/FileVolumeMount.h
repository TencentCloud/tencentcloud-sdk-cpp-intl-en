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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Cloud disk mounting configuration in the application sandbox.
                */
                class FileVolumeMount : public AbstractModel
                {
                public:
                    FileVolumeMount();
                    ~FileVolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access mode: RO=read-only, RW=read-write; required. Only RW can be used when mounting to /workdir.</p>
                     * @return AccessMode <p>Access mode: RO=read-only, RW=read-write; required. Only RW can be used when mounting to /workdir.</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Access mode: RO=read-only, RW=read-write; required. Only RW can be used when mounting to /workdir.</p>
                     * @param _accessMode <p>Access mode: RO=read-only, RW=read-write; required. Only RW can be used when mounting to /workdir.</p>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>Absolute mount directory in the sandbox; /workdir can be mounted at most once and only RW can be used.</p>
                     * @return MountPath <p>Absolute mount directory in the sandbox; /workdir can be mounted at most once and only RW can be used.</p>
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置<p>Absolute mount directory in the sandbox; /workdir can be mounted at most once and only RW can be used.</p>
                     * @param _mountPath <p>Absolute mount directory in the sandbox; /workdir can be mounted at most once and only RW can be used.</p>
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取<p>Cloud disk identification</p>
                     * @return VolumeId <p>Cloud disk identification</p>
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置<p>Cloud disk identification</p>
                     * @param _volumeId <p>Cloud disk identification</p>
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                    /**
                     * 获取<p>Server-side generated mount flag. Reserved for modification, optional for new additions.</p>
                     * @return MountId <p>Server-side generated mount flag. Reserved for modification, optional for new additions.</p>
                     * 
                     */
                    std::string GetMountId() const;

                    /**
                     * 设置<p>Server-side generated mount flag. Reserved for modification, optional for new additions.</p>
                     * @param _mountId <p>Server-side generated mount flag. Reserved for modification, optional for new additions.</p>
                     * 
                     */
                    void SetMountId(const std::string& _mountId);

                    /**
                     * 判断参数 MountId 是否已赋值
                     * @return MountId 是否已赋值
                     * 
                     */
                    bool MountIdHasBeenSet() const;

                    /**
                     * 获取<p>Path relative to the root directory of cloud disk data; an empty string indicates mounting the entire data root directory.</p>
                     * @return RelativePath <p>Path relative to the root directory of cloud disk data; an empty string indicates mounting the entire data root directory.</p>
                     * 
                     */
                    std::string GetRelativePath() const;

                    /**
                     * 设置<p>Path relative to the root directory of cloud disk data; an empty string indicates mounting the entire data root directory.</p>
                     * @param _relativePath <p>Path relative to the root directory of cloud disk data; an empty string indicates mounting the entire data root directory.</p>
                     * 
                     */
                    void SetRelativePath(const std::string& _relativePath);

                    /**
                     * 判断参数 RelativePath 是否已赋值
                     * @return RelativePath 是否已赋值
                     * 
                     */
                    bool RelativePathHasBeenSet() const;

                    /**
                     * 获取<p>Cloud disk name. It is supplemented by the server only when querying the application configuration and ignored during modification. It is empty when it cannot be obtained and does not impact the mount configuration.</p>
                     * @return VolumeName <p>Cloud disk name. It is supplemented by the server only when querying the application configuration and ignored during modification. It is empty when it cannot be obtained and does not impact the mount configuration.</p>
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置<p>Cloud disk name. It is supplemented by the server only when querying the application configuration and ignored during modification. It is empty when it cannot be obtained and does not impact the mount configuration.</p>
                     * @param _volumeName <p>Cloud disk name. It is supplemented by the server only when querying the application configuration and ignored during modification. It is empty when it cannot be obtained and does not impact the mount configuration.</p>
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                private:

                    /**
                     * <p>Access mode: RO=read-only, RW=read-write; required. Only RW can be used when mounting to /workdir.</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Absolute mount directory in the sandbox; /workdir can be mounted at most once and only RW can be used.</p>
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * <p>Cloud disk identification</p>
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                    /**
                     * <p>Server-side generated mount flag. Reserved for modification, optional for new additions.</p>
                     */
                    std::string m_mountId;
                    bool m_mountIdHasBeenSet;

                    /**
                     * <p>Path relative to the root directory of cloud disk data; an empty string indicates mounting the entire data root directory.</p>
                     */
                    std::string m_relativePath;
                    bool m_relativePathHasBeenSet;

                    /**
                     * <p>Cloud disk name. It is supplemented by the server only when querying the application configuration and ignored during modification. It is empty when it cannot be obtained and does not impact the mount configuration.</p>
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_
