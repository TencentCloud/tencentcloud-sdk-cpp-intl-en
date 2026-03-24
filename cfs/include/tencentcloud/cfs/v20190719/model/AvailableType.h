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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Versioning - array of classes
                */
                class AvailableType : public AbstractModel
                {
                public:
                    AvailableType();
                    ~AvailableType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Protocol and sale details</p>
                     * @return Protocols <p>Protocol and sale details</p>
                     * 
                     */
                    std::vector<AvailableProtoStatus> GetProtocols() const;

                    /**
                     * 设置<p>Protocol and sale details</p>
                     * @param _protocols <p>Protocol and sale details</p>
                     * 
                     */
                    void SetProtocols(const std::vector<AvailableProtoStatus>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取<p>Storage type. In the return value, SD indicates General Standard Storage, HP indicates General Performance Storage, TB indicates Standard Turbo, and TP indicates High-Performance Turbo.</p>
                     * @return Type <p>Storage type. In the return value, SD indicates General Standard Storage, HP indicates General Performance Storage, TB indicates Standard Turbo, and TP indicates High-Performance Turbo.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Storage type. In the return value, SD indicates General Standard Storage, HP indicates General Performance Storage, TB indicates Standard Turbo, and TP indicates High-Performance Turbo.</p>
                     * @param _type <p>Storage type. In the return value, SD indicates General Standard Storage, HP indicates General Performance Storage, TB indicates Standard Turbo, and TP indicates High-Performance Turbo.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Support for prepaid. In the return value, true means supported and false means unsupported.</p>
                     * @return Prepayment <p>Support for prepaid. In the return value, true means supported and false means unsupported.</p>
                     * 
                     */
                    bool GetPrepayment() const;

                    /**
                     * 设置<p>Support for prepaid. In the return value, true means supported and false means unsupported.</p>
                     * @param _prepayment <p>Support for prepaid. In the return value, true means supported and false means unsupported.</p>
                     * 
                     */
                    void SetPrepayment(const bool& _prepayment);

                    /**
                     * 判断参数 Prepayment 是否已赋值
                     * @return Prepayment 是否已赋值
                     * 
                     */
                    bool PrepaymentHasBeenSet() const;

                    /**
                     * 获取<p>File system version</p><p>Enumeration value:</p><ul><li>v1.5: Universal Series</li><li>v3.1: Universal Series (enhanced)</li><li>v4.0: Turbo series</li></ul>
                     * @return Version <p>File system version</p><p>Enumeration value:</p><ul><li>v1.5: Universal Series</li><li>v3.1: Universal Series (enhanced)</li><li>v4.0: Turbo series</li></ul>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>File system version</p><p>Enumeration value:</p><ul><li>v1.5: Universal Series</li><li>v3.1: Universal Series (enhanced)</li><li>v4.0: Turbo series</li></ul>
                     * @param _version <p>File system version</p><p>Enumeration value:</p><ul><li>v1.5: Universal Series</li><li>v3.1: Universal Series (enhanced)</li><li>v4.0: Turbo series</li></ul>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>Protocol and sale details</p>
                     */
                    std::vector<AvailableProtoStatus> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * <p>Storage type. In the return value, SD indicates General Standard Storage, HP indicates General Performance Storage, TB indicates Standard Turbo, and TP indicates High-Performance Turbo.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Support for prepaid. In the return value, true means supported and false means unsupported.</p>
                     */
                    bool m_prepayment;
                    bool m_prepaymentHasBeenSet;

                    /**
                     * <p>File system version</p><p>Enumeration value:</p><ul><li>v1.5: Universal Series</li><li>v3.1: Universal Series (enhanced)</li><li>v4.0: Turbo series</li></ul>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
