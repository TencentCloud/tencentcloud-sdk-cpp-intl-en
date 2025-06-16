/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEQACATERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEQACATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateQACate response structure.
                */
                class CreateQACateResponse : public AbstractModel
                {
                public:
                    CreateQACateResponse();
                    ~CreateQACateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is possible to add.

                     * @return CanAdd Whether it is possible to add.

                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 判断参数 CanAdd 是否已赋值
                     * @return CanAdd 是否已赋值
                     * 
                     */
                    bool CanAddHasBeenSet() const;

                    /**
                     * 获取Whether it is editable.
                     * @return CanEdit Whether it is editable.
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                    /**
                     * 获取Whether it can be deleted.

                     * @return CanDelete Whether it can be deleted.

                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取Category business ID.
                     * @return CateBizId Category business ID.
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                private:

                    /**
                     * Whether it is possible to add.

                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * Whether it is editable.
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * Whether it can be deleted.

                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * Category business ID.
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEQACATERESPONSE_H_
