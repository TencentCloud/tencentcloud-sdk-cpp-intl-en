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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcFailTableInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * dlc delivery failure handling message
                */
                class DlcFailHandle : public AbstractModel
                {
                public:
                    DlcFailHandle();
                    ~DlcFailHandle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to store in DLC</p><p>Default value: false</p><p>Controls whether to enable storing delivery failure logs in DLC tables</p>
                     * @return StoreToDlc <p>Whether to store in DLC</p><p>Default value: false</p><p>Controls whether to enable storing delivery failure logs in DLC tables</p>
                     * 
                     */
                    bool GetStoreToDlc() const;

                    /**
                     * 设置<p>Whether to store in DLC</p><p>Default value: false</p><p>Controls whether to enable storing delivery failure logs in DLC tables</p>
                     * @param _storeToDlc <p>Whether to store in DLC</p><p>Default value: false</p><p>Controls whether to enable storing delivery failure logs in DLC tables</p>
                     * 
                     */
                    void SetStoreToDlc(const bool& _storeToDlc);

                    /**
                     * 判断参数 StoreToDlc 是否已赋值
                     * @return StoreToDlc 是否已赋值
                     * 
                     */
                    bool StoreToDlcHasBeenSet() const;

                    /**
                     * 获取<p>DLC table information</p>
                     * @return DlcFailTableInfo <p>DLC table information</p>
                     * 
                     */
                    DlcFailTableInfo GetDlcFailTableInfo() const;

                    /**
                     * 设置<p>DLC table information</p>
                     * @param _dlcFailTableInfo <p>DLC table information</p>
                     * 
                     */
                    void SetDlcFailTableInfo(const DlcFailTableInfo& _dlcFailTableInfo);

                    /**
                     * 判断参数 DlcFailTableInfo 是否已赋值
                     * @return DlcFailTableInfo 是否已赋值
                     * 
                     */
                    bool DlcFailTableInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to store in DLC</p><p>Default value: false</p><p>Controls whether to enable storing delivery failure logs in DLC tables</p>
                     */
                    bool m_storeToDlc;
                    bool m_storeToDlcHasBeenSet;

                    /**
                     * <p>DLC table information</p>
                     */
                    DlcFailTableInfo m_dlcFailTableInfo;
                    bool m_dlcFailTableInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCFAILHANDLE_H_
