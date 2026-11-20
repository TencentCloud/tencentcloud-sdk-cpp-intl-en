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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECORD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Single exit-entry record
                */
                class Record : public AbstractModel
                {
                public:
                    Record();
                    ~Record() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Serial number.
                     * @return Index Serial number.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Serial number.
                     * @param _index Serial number.
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Exit/Entry
                     * @return Type Exit/Entry
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exit/Entry
                     * @param _type Exit/Entry
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
                     * 获取Date of exit/entry
                     * @return Date Date of exit/entry
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date of exit/entry
                     * @param _date Date of exit/entry
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Document name
                     * @return CertName Document name
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Document name
                     * @param _certName Document name
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Document number
                     * @return CertId Document number
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Document number
                     * @param _certId Document number
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Port of exit/entry
                     * @return Port Port of exit/entry
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port of exit/entry
                     * @param _port Port of exit/entry
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Serial number.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Exit/Entry
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Date of exit/entry
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Document name
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Document number
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Port of exit/entry
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECORD_H_
