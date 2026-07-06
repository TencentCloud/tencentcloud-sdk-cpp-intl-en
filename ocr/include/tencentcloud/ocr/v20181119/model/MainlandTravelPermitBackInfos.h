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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_

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
                * 
                */
                class MainlandTravelPermitBackInfos : public AbstractModel
                {
                public:
                    MainlandTravelPermitBackInfos();
                    ~MainlandTravelPermitBackInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取
                     * @return IDNumber 
                     * 
                     */
                    std::string GetIDNumber() const;

                    /**
                     * 设置
                     * @param _iDNumber 
                     * 
                     */
                    void SetIDNumber(const std::string& _iDNumber);

                    /**
                     * 判断参数 IDNumber 是否已赋值
                     * @return IDNumber 是否已赋值
                     * 
                     */
                    bool IDNumberHasBeenSet() const;

                    /**
                     * 获取
                     * @return HistoryNumber 
                     * 
                     */
                    std::string GetHistoryNumber() const;

                    /**
                     * 设置
                     * @param _historyNumber 
                     * 
                     */
                    void SetHistoryNumber(const std::string& _historyNumber);

                    /**
                     * 判断参数 HistoryNumber 是否已赋值
                     * @return HistoryNumber 是否已赋值
                     * 
                     */
                    bool HistoryNumberHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_iDNumber;
                    bool m_iDNumberHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_historyNumber;
                    bool m_historyNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MAINLANDTRAVELPERMITBACKINFOS_H_
