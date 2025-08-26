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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILCOMMONOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILCOMMONOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BrazilCardInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeBrazilCommonOCR response structure.
                */
                class RecognizeBrazilCommonOCRResponse : public AbstractModel
                {
                public:
                    RecognizeBrazilCommonOCRResponse();
                    ~RecognizeBrazilCommonOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the type of document in brazil. valid values: 1. RNE 2. RNM 3. IDCard 4. DrivingLicense.
                     * @return Type Specifies the type of document in brazil. valid values: 1. RNE 2. RNM 3. IDCard 4. DrivingLicense.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Identifies the content of a brazil document.
                     * @return Result Identifies the content of a brazil document.
                     * 
                     */
                    BrazilCardInfo GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Specifies the type of document in brazil. valid values: 1. RNE 2. RNM 3. IDCard 4. DrivingLicense.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Identifies the content of a brazil document.
                     */
                    BrazilCardInfo m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILCOMMONOCRRESPONSE_H_
