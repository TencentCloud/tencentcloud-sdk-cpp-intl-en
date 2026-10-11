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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_

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
                * GooseFSVolume
                */
                class GooseFSVolume : public AbstractModel
                {
                public:
                    GooseFSVolume();
                    ~GooseFSVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Storage volume name.</p>
                     * @return VolumeName <p>Storage volume name.</p>
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置<p>Storage volume name.</p>
                     * @param _volumeName <p>Storage volume name.</p>
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS instance ID.</p>
                     * @return ClusterId <p>GooseFS instance ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>GooseFS instance ID.</p>
                     * @param _clusterId <p>GooseFS instance ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS namespace.</p>
                     * @return Namespace <p>GooseFS namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>GooseFS namespace.</p>
                     * @param _namespace <p>GooseFS namespace.</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Mount path in the namespace.</p>
                     * @return SubPath <p>Mount path in the namespace.</p>
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置<p>Mount path in the namespace.</p>
                     * @param _subPath <p>Mount path in the namespace.</p>
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取<p>FuseVERSION description.</p>
                     * @return FuseVersion <p>FuseVERSION description.</p>
                     * 
                     */
                    std::string GetFuseVersion() const;

                    /**
                     * 设置<p>FuseVERSION description.</p>
                     * @param _fuseVersion <p>FuseVERSION description.</p>
                     * 
                     */
                    void SetFuseVersion(const std::string& _fuseVersion);

                    /**
                     * 判断参数 FuseVersion 是否已赋值
                     * @return FuseVersion 是否已赋值
                     * 
                     */
                    bool FuseVersionHasBeenSet() const;

                    /**
                     * 获取<p>Client version description, for example, GOOSE-1.5.2.</p>
                     * @return ClientVersion <p>Client version description, for example, GOOSE-1.5.2.</p>
                     * 
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置<p>Client version description, for example, GOOSE-1.5.2.</p>
                     * @param _clientVersion <p>Client version description, for example, GOOSE-1.5.2.</p>
                     * 
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     * 
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取<p>Default mount parameter.</p>
                     * @return MountOptions <p>Default mount parameter.</p>
                     * 
                     */
                    std::string GetMountOptions() const;

                    /**
                     * 设置<p>Default mount parameter.</p>
                     * @param _mountOptions <p>Default mount parameter.</p>
                     * 
                     */
                    void SetMountOptions(const std::string& _mountOptions);

                    /**
                     * 判断参数 MountOptions 是否已赋值
                     * @return MountOptions 是否已赋值
                     * 
                     */
                    bool MountOptionsHasBeenSet() const;

                    /**
                     * 获取<p>Default JVM parameter.</p>
                     * @return JvmOptions <p>Default JVM parameter.</p>
                     * 
                     */
                    std::string GetJvmOptions() const;

                    /**
                     * 设置<p>Default JVM parameter.</p>
                     * @param _jvmOptions <p>Default JVM parameter.</p>
                     * 
                     */
                    void SetJvmOptions(const std::string& _jvmOptions);

                    /**
                     * 判断参数 JvmOptions 是否已赋值
                     * @return JvmOptions 是否已赋值
                     * 
                     */
                    bool JvmOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>Storage volume name.</p>
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * <p>GooseFS instance ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>GooseFS namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Mount path in the namespace.</p>
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * <p>FuseVERSION description.</p>
                     */
                    std::string m_fuseVersion;
                    bool m_fuseVersionHasBeenSet;

                    /**
                     * <p>Client version description, for example, GOOSE-1.5.2.</p>
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * <p>Default mount parameter.</p>
                     */
                    std::string m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                    /**
                     * <p>Default JVM parameter.</p>
                     */
                    std::string m_jvmOptions;
                    bool m_jvmOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_
