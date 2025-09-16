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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CFS storage configurations.
                */
                class CFSConfig : public AbstractModel
                {
                public:
                    CFSConfig();
                    ~CFSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CFS instance ID.
                     * @return Id CFS instance ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置CFS instance ID.
                     * @param _id CFS instance ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Storage path.
                     * @return Path Storage path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Storage path.
                     * @param _path Storage path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Mounting type of CFS. Valid values: STORAGE and SOURCE, which respectively indicate the storage expansion mode and the data source mode. The default value is STORAGE.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MountType Mounting type of CFS. Valid values: STORAGE and SOURCE, which respectively indicate the storage expansion mode and the data source mode. The default value is STORAGE.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMountType() const;

                    /**
                     * 设置Mounting type of CFS. Valid values: STORAGE and SOURCE, which respectively indicate the storage expansion mode and the data source mode. The default value is STORAGE.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mountType Mounting type of CFS. Valid values: STORAGE and SOURCE, which respectively indicate the storage expansion mode and the data source mode. The default value is STORAGE.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMountType(const std::string& _mountType);

                    /**
                     * 判断参数 MountType 是否已赋值
                     * @return MountType 是否已赋值
                     * 
                     */
                    bool MountTypeHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: NFS and TURBO.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol. Valid values: NFS and TURBO.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: NFS and TURBO.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol. Valid values: NFS and TURBO.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * CFS instance ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Storage path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Mounting type of CFS. Valid values: STORAGE and SOURCE, which respectively indicate the storage expansion mode and the data source mode. The default value is STORAGE.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mountType;
                    bool m_mountTypeHasBeenSet;

                    /**
                     * Protocol. Valid values: NFS and TURBO.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_
