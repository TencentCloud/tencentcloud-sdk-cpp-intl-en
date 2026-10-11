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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_

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
                * Mount volume.
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mount volume name.
                     * @return MountName Mount volume name.
                     * 
                     */
                    std::string GetMountName() const;

                    /**
                     * 设置Mount volume name.
                     * @param _mountName Mount volume name.
                     * 
                     */
                    void SetMountName(const std::string& _mountName);

                    /**
                     * 判断参数 MountName 是否已赋值
                     * @return MountName 是否已赋值
                     * 
                     */
                    bool MountNameHasBeenSet() const;

                    /**
                     * 获取Mount path.
                     * @return MountPath Mount path.
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置Mount path.
                     * @param _mountPath Mount path.
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
                     * 获取Mount type.
                     * @return SubPathMode Mount type.
                     * 
                     */
                    std::string GetSubPathMode() const;

                    /**
                     * 设置Mount type.
                     * @param _subPathMode Mount type.
                     * 
                     */
                    void SetSubPathMode(const std::string& _subPathMode);

                    /**
                     * 判断参数 SubPathMode 是否已赋值
                     * @return SubPathMode 是否已赋值
                     * 
                     */
                    bool SubPathModeHasBeenSet() const;

                    /**
                     * 获取Sub-path.
                     * @return SubPath Sub-path.
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置Sub-path.
                     * @param _subPath Sub-path.
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
                     * 获取Mounting mode. Valid values: ReadWrite and OnlyRead.
                     * @return MountMode Mounting mode. Valid values: ReadWrite and OnlyRead.
                     * 
                     */
                    std::string GetMountMode() const;

                    /**
                     * 设置Mounting mode. Valid values: ReadWrite and OnlyRead.
                     * @param _mountMode Mounting mode. Valid values: ReadWrite and OnlyRead.
                     * 
                     */
                    void SetMountMode(const std::string& _mountMode);

                    /**
                     * 判断参数 MountMode 是否已赋值
                     * @return MountMode 是否已赋值
                     * 
                     */
                    bool MountModeHasBeenSet() const;

                private:

                    /**
                     * Mount volume name.
                     */
                    std::string m_mountName;
                    bool m_mountNameHasBeenSet;

                    /**
                     * Mount path.
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * Mount type.
                     */
                    std::string m_subPathMode;
                    bool m_subPathModeHasBeenSet;

                    /**
                     * Sub-path.
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * Mounting mode. Valid values: ReadWrite and OnlyRead.
                     */
                    std::string m_mountMode;
                    bool m_mountModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMEMOUNT_H_
