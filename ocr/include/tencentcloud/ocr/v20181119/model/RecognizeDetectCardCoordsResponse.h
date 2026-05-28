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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/CoordsItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeDetectCardCoords response structure.
                */
                class RecognizeDetectCardCoordsResponse : public AbstractModel
                {
                public:
                    RecognizeDetectCardCoordsResponse();
                    ~RecognizeDetectCardCoordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detected coordinate information.
                     * @return ItemList Detected coordinate information.
                     * 
                     */
                    std::vector<CoordsItem> GetItemList() const;

                    /**
                     * 判断参数 ItemList 是否已赋值
                     * @return ItemList 是否已赋值
                     * 
                     */
                    bool ItemListHasBeenSet() const;

                private:

                    /**
                     * Detected coordinate information.
                     */
                    std::vector<CoordsItem> m_itemList;
                    bool m_itemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEDETECTCARDCOORDSRESPONSE_H_
