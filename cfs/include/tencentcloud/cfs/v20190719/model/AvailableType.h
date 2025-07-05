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
                     * 获取Protocol and sale details
                     * @return Protocols Protocol and sale details
                     * 
                     */
                    std::vector<AvailableProtoStatus> GetProtocols() const;

                    /**
                     * 设置Protocol and sale details
                     * @param _protocols Protocol and sale details
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
                     * 获取Storage class. Valid values: `SD` (standard storage) and `HP` (high-performance storage)
                     * @return Type Storage class. Valid values: `SD` (standard storage) and `HP` (high-performance storage)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Storage class. Valid values: `SD` (standard storage) and `HP` (high-performance storage)
                     * @param _type Storage class. Valid values: `SD` (standard storage) and `HP` (high-performance storage)
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
                     * 获取Indicates whether prepaid is supported. `true`: yes; `false`: no
                     * @return Prepayment Indicates whether prepaid is supported. `true`: yes; `false`: no
                     * 
                     */
                    bool GetPrepayment() const;

                    /**
                     * 设置Indicates whether prepaid is supported. `true`: yes; `false`: no
                     * @param _prepayment Indicates whether prepaid is supported. `true`: yes; `false`: no
                     * 
                     */
                    void SetPrepayment(const bool& _prepayment);

                    /**
                     * 判断参数 Prepayment 是否已赋值
                     * @return Prepayment 是否已赋值
                     * 
                     */
                    bool PrepaymentHasBeenSet() const;

                private:

                    /**
                     * Protocol and sale details
                     */
                    std::vector<AvailableProtoStatus> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * Storage class. Valid values: `SD` (standard storage) and `HP` (high-performance storage)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Indicates whether prepaid is supported. `true`: yes; `false`: no
                     */
                    bool m_prepayment;
                    bool m_prepaymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
