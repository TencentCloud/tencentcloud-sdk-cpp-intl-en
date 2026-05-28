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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_

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
                * Toll receipt
                */
                class TollInvoice : public AbstractModel
                {
                public:
                    TollInvoice();
                    ~TollInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invoice title
                     * @return Title Invoice title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Invoice title
                     * @param _title Invoice title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Invoice code
                     * @return Code Invoice code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Invoice code
                     * @param _code Invoice code
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Invoice number
                     * @return Number Invoice number
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Invoice number
                     * @param _number Invoice number
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Total amount (in figures)
                     * @return Total Total amount (in figures)
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Total amount (in figures)
                     * @param _total Total amount (in figures)
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Invoice type
                     * @return Kind Invoice type
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Invoice type
                     * @param _kind Invoice type
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
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
                     * 获取Time
                     * @return Time Time
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time
                     * @param _time Time
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Entrance
                     * @return Entrance Entrance
                     * 
                     */
                    std::string GetEntrance() const;

                    /**
                     * 设置Entrance
                     * @param _entrance Entrance
                     * 
                     */
                    void SetEntrance(const std::string& _entrance);

                    /**
                     * 判断参数 Entrance 是否已赋值
                     * @return Entrance 是否已赋值
                     * 
                     */
                    bool EntranceHasBeenSet() const;

                    /**
                     * 获取Exit
                     * @return Exit Exit
                     * 
                     */
                    std::string GetExit() const;

                    /**
                     * 设置Exit
                     * @param _exit Exit
                     * 
                     */
                    void SetExit(const std::string& _exit);

                    /**
                     * 判断参数 Exit 是否已赋值
                     * @return Exit 是否已赋值
                     * 
                     */
                    bool ExitHasBeenSet() const;

                    /**
                     * 获取Highway mark (0: No, 1: Yes)
                     * @return HighwayMark Highway mark (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetHighwayMark() const;

                    /**
                     * 设置Highway mark (0: No, 1: Yes)
                     * @param _highwayMark Highway mark (0: No, 1: Yes)
                     * 
                     */
                    void SetHighwayMark(const int64_t& _highwayMark);

                    /**
                     * 判断参数 HighwayMark 是否已赋值
                     * @return HighwayMark 是否已赋值
                     * 
                     */
                    bool HighwayMarkHasBeenSet() const;

                    /**
                     * 获取Whether there is a QR code (0: No, 1: Yes)
                     * @return QRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置Whether there is a QR code (0: No, 1: Yes)
                     * @param _qRCodeMark Whether there is a QR code (0: No, 1: Yes)
                     * 
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     * 
                     */
                    bool QRCodeMarkHasBeenSet() const;

                private:

                    /**
                     * Invoice title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Invoice code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Invoice number
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Total amount (in figures)
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Invoice type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Time
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Entrance
                     */
                    std::string m_entrance;
                    bool m_entranceHasBeenSet;

                    /**
                     * Exit
                     */
                    std::string m_exit;
                    bool m_exitHasBeenSet;

                    /**
                     * Highway mark (0: No, 1: Yes)
                     */
                    int64_t m_highwayMark;
                    bool m_highwayMarkHasBeenSet;

                    /**
                     * Whether there is a QR code (0: No, 1: Yes)
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TOLLINVOICE_H_
